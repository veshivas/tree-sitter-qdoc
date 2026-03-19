package main

import (
	"flag"
	"fmt"
	"os"
	"regexp"
	"strings"

	sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_qdoc "github.com/veshivas/tree-sitter-qdoc/bindings/go"
)

// Topic commands that identify what is being documented
var topicCommands = map[string]bool{
	"class": true, "enum": true, "fn": true, "property": true, "variable": true,
	"typedef": true, "typealias": true, "namespace": true, "module": true,
	"group": true, "page": true, "example": true, "macro": true, "headerfile": true,
	"qmltype": true, "qmlproperty": true, "qmlmethod": true, "qmlsignal": true,
	"qmlenum": true, "qmlmodule": true, "qmlattachedproperty": true,
	"qmlattachedsignal": true,
}

// skipAfterCommands contains commands whose immediately-following text node is
// a structured argument (identifier, signature, reference list), not prose.
var skipAfterCommands = map[string]bool{
	"class": true, "enum": true, "fn": true, "property": true, "variable": true,
	"typedef": true, "typealias": true, "namespace": true, "module": true,
	"group": true, "page": true, "example": true, "macro": true, "headerfile": true,
	"qmltype": true, "qmlproperty": true, "qmlmethod": true, "qmlsignal": true,
	"qmlenum": true, "qmlmodule": true, "qmlattachedproperty": true,
	"qmlattachedsignal": true,
	"sa": true, "see": true,
}

var (
	reParagraph = regexp.MustCompile(`\n{2,}`)
	// Matches sentence-final punctuation followed by whitespace and an
	// uppercase letter or quote. Used to insert a split marker since Go
	// regexp has no lookbehind.
	reSentenceBoundary = regexp.MustCompile(`([.!?])\s+([A-Z"])`)
)

// splitSentences splits prose into individual sentences.
// Paragraph-splits first so single-line command arguments separated by a
// blank line don't bleed into following prose. Only fragments ending with
// sentence-final punctuation (. ! ?) are returned.
func splitSentences(text string) []string {
	var sentences []string
	for _, para := range reParagraph.Split(text, -1) {
		para = strings.Join(strings.Fields(para), " ")
		if para == "" {
			continue
		}
		// Insert a null-byte marker at each sentence boundary, then split.
		marked := reSentenceBoundary.ReplaceAllString(para, "$1\x00$2")
		for _, s := range strings.Split(marked, "\x00") {
			s = strings.TrimSpace(s)
			if s == "" {
				continue
			}
			if last := s[len(s)-1]; last == '.' || last == '!' || last == '?' {
				sentences = append(sentences, s)
			}
		}
	}
	return sentences
}

// CommentSentences holds the sentences extracted from one comment block.
type CommentSentences struct {
	Line      uint
	Sentences []string
}

// extractSentences reconstructs prose from a block_comment node and splits
// it into sentences. Text nodes immediately following a topic or non-prose
// command are skipped (they hold the command argument). Inline command text
// is substituted inline with braces stripped. Block commands (list, table,
// legalese, quotation) are recursed into; raw blocks are skipped entirely.
func extractSentences(blockComment *sitter.Node, source []byte) []string {
	var b strings.Builder

	var walkMarkups func(markups []*sitter.Node)
	walkMarkups = func(markups []*sitter.Node) {
		skipNextText := false
		for _, markup := range markups {
			if markup.Kind() != "markup" {
				continue
			}
			for j := uint(0); j < markup.NamedChildCount(); j++ {
				node := markup.NamedChild(j)
				switch node.Kind() {
				case "command":
					cmdName := ""
					for k := uint(0); k < node.NamedChildCount(); k++ {
						if c := node.NamedChild(k); c.Kind() == "command_name" {
							cmdName = getText(c, source)
						}
					}
					skipNextText = skipAfterCommands[cmdName]
					// cell_span ({rows,cols}) is a structured argument — prose follows normally
					if node.ChildByFieldName("span") != nil {
						skipNextText = false
					}
				case "text":
					if !skipNextText {
						b.WriteString(getText(node, source))
					}
					skipNextText = false
				case "inline_command":
					skipNextText = false
					for k := uint(0); k < node.NamedChildCount(); k++ {
						if ic := node.NamedChild(k); ic.Kind() == "inline_text" {
							t := strings.TrimSpace(getText(ic, source))
							t = strings.TrimPrefix(t, "{")
							t = strings.TrimSuffix(t, "}")
							b.WriteString(t)
						}
					}
				case "image_command":
					// \image filename [alt text] — skip filename, include alt text in prose
					skipNextText = false
					if altNode := node.ChildByFieldName("alt"); altNode != nil {
						alt := strings.TrimSpace(getText(altNode, source))
						if alt != "" {
							b.WriteString(" " + alt)
						}
					}
				case "inlineimage_command":
					// \inlineimage filename [{alt text}] — skip filename, include alt text
					skipNextText = false
					if altNode := node.ChildByFieldName("alt"); altNode != nil {
						alt := strings.TrimSpace(getText(altNode, source))
						alt = strings.TrimPrefix(alt, "{")
						alt = strings.TrimSuffix(alt, "}")
						b.WriteString(alt)
					}
				case "block_command":
					skipNextText = false
					for k := uint(0); k < node.NamedChildCount(); k++ {
						block := node.NamedChild(k)
						if block.Kind() == "raw_block" {
							continue // raw HTML — skip entirely
						}
						// list_block, table_block, legalese_block, quotation_block
						// all contain markup children; collect and recurse.
						var inner []*sitter.Node
						for m := uint(0); m < block.NamedChildCount(); m++ {
							if c := block.NamedChild(m); c.Kind() == "markup" {
								inner = append(inner, c)
							}
						}
						walkMarkups(inner)
					}
				}
			}
		}
	}

	var markups []*sitter.Node
	for i := uint(0); i < blockComment.NamedChildCount(); i++ {
		markups = append(markups, blockComment.NamedChild(i))
	}
	walkMarkups(markups)
	return splitSentences(b.String())
}

// extractAllSentences finds all comment blocks in the tree and extracts
// sentences from each.
func extractAllSentences(tree *sitter.Tree, source []byte) []CommentSentences {
	var results []CommentSentences

	var traverse func(*sitter.Node)
	traverse = func(node *sitter.Node) {
		if node.Kind() == "block_comment" {
			sentences := extractSentences(node, source)
			if len(sentences) > 0 {
				results = append(results, CommentSentences{
					Line:      node.StartPosition().Row + 1,
					Sentences: sentences,
				})
			}
		}
		for i := uint(0); i < node.NamedChildCount(); i++ {
			traverse(node.NamedChild(i))
		}
	}
	traverse(tree.RootNode())
	return results
}

// CommandInstance represents any block-level QDoc command with its text
type CommandInstance struct {
	Command string
	Text    string
	Line    uint
}

// InlineCommand represents inline markup
type InlineCommand struct {
	Command string
	Text    string
	Line    uint
}

// getText extracts text content from a node
func getText(node *sitter.Node, source []byte) string {
	return string(source[node.StartByte():node.EndByte()])
}

// getFollowingText gets the text that follows a command on the same line.
// In the AST, the text after a command is a sibling text node of the command's
// parent markup node, not a child of the command itself.
func getFollowingText(commandNode *sitter.Node, source []byte) string {
	parent := commandNode.Parent() // parent is a "markup" node
	if parent == nil {
		return ""
	}
	next := parent.NextNamedSibling() // next "markup" sibling
	if next == nil {
		return ""
	}
	for i := uint(0); i < next.NamedChildCount(); i++ {
		child := next.NamedChild(i)
		if child.Kind() == "text" {
			text := strings.TrimLeft(getText(child, source), " \t")
			// Take only up to the first newline (same-line text only)
			if idx := strings.IndexByte(text, '\n'); idx >= 0 {
				text = text[:idx]
			}
			return strings.TrimSpace(text)
		}
	}
	return ""
}

// extractAllCommandInstances finds all block-level commands with their text
func extractAllCommandInstances(tree *sitter.Tree, source []byte) []CommandInstance {
	var results []CommandInstance

	var traverse func(*sitter.Node)
	traverse = func(node *sitter.Node) {
		switch node.Kind() {
		case "command":
			var cmdName string
			cmdLine := node.StartPosition().Row + 1
			for i := uint(0); i < node.NamedChildCount(); i++ {
				if child := node.NamedChild(i); child.Kind() == "command_name" {
					cmdName = getText(child, source)
				}
			}
			if cmdName != "" {
				text := getFollowingText(node, source)
				if spanNode := node.ChildByFieldName("span"); spanNode != nil {
					span := strings.TrimSpace(getText(spanNode, source))
					span = strings.TrimPrefix(span, "{")
					span = strings.TrimSuffix(span, "}")
					if span != "" {
						text = "(span: " + span + ") " + text
					}
				}
				results = append(results, CommandInstance{
					Command: cmdName,
					Text:    text,
					Line:    cmdLine,
				})
			}
		case "image_command":
			cmdLine := node.StartPosition().Row + 1
			filename := ""
			if n := node.ChildByFieldName("filename"); n != nil {
				filename = getText(n, source)
			}
			alt := ""
			if n := node.ChildByFieldName("alt"); n != nil {
				alt = strings.TrimSpace(getText(n, source))
			}
			imgText := filename
			if alt != "" {
				imgText = filename + " " + alt
			}
			results = append(results, CommandInstance{Command: "image", Text: imgText, Line: cmdLine})
		case "block_command":
			// Record each block type (list, table, legalese, etc.) with its optional argument.
			// Inner commands (\li, \row, etc.) are picked up by the recursion below.
			for k := uint(0); k < node.NamedChildCount(); k++ {
				block := node.NamedChild(k)
				cmdName := strings.TrimSuffix(block.Kind(), "_block")
				cmdLine := block.StartPosition().Row + 1
				arg := ""
				if argNode := block.ChildByFieldName("arg"); argNode != nil {
					arg = getText(argNode, source)
				}
				results = append(results, CommandInstance{Command: cmdName, Text: arg, Line: cmdLine})
			}
		}

		for i := uint(0); i < node.NamedChildCount(); i++ {
			traverse(node.NamedChild(i))
		}
	}

	traverse(tree.RootNode())
	return results
}

// extractInlineCommands finds all inline markup commands
func extractInlineCommands(tree *sitter.Tree, source []byte) []InlineCommand {
	var results []InlineCommand

	var traverse func(*sitter.Node)
	traverse = func(node *sitter.Node) {
		switch node.Kind() {
		case "inline_command":
			var cmdName, cmdText string
			cmdLine := node.StartPosition().Row + 1
			for i := uint(0); i < node.NamedChildCount(); i++ {
				child := node.NamedChild(i)
				switch child.Kind() {
				case "inline_command_name":
					cmdName = getText(child, source)
				case "inline_text":
					cmdText = strings.TrimSpace(getText(child, source))
				}
			}
			if cmdName != "" {
				results = append(results, InlineCommand{Command: cmdName, Text: cmdText, Line: cmdLine})
			}
		case "inlineimage_command":
			cmdLine := node.StartPosition().Row + 1
			filename := ""
			if n := node.ChildByFieldName("filename"); n != nil {
				filename = getText(n, source)
			}
			alt := ""
			if n := node.ChildByFieldName("alt"); n != nil {
				alt = strings.TrimSpace(getText(n, source))
				alt = strings.TrimPrefix(alt, "{")
				alt = strings.TrimSuffix(alt, "}")
			}
			text := filename
			if alt != "" {
				text += " (alt: " + alt + ")"
			}
			results = append(results, InlineCommand{Command: "inlineimage", Text: text, Line: cmdLine})
		}

		for i := uint(0); i < node.NamedChildCount(); i++ {
			traverse(node.NamedChild(i))
		}
	}

	traverse(tree.RootNode())
	return results
}

// filterCommands filters command instances by the given set (nil = no filter)
func filterCommands(cmds []CommandInstance, filterSet map[string]bool) []CommandInstance {
	if filterSet == nil {
		return cmds
	}
	var result []CommandInstance
	for _, c := range cmds {
		if filterSet[c.Command] {
			result = append(result, c)
		}
	}
	return result
}

// filterInlines filters inline commands by the given set (nil = no filter)
func filterInlines(inlines []InlineCommand, filterSet map[string]bool) []InlineCommand {
	if filterSet == nil {
		return inlines
	}
	var result []InlineCommand
	for _, c := range inlines {
		if filterSet[c.Command] {
			result = append(result, c)
		}
	}
	return result
}

func main() {
	filterFlag := flag.String("filter", "", "Comma-separated list of commands to extract (e.g. title,brief,fn)")
	flag.Usage = func() {
		fmt.Println("Usage: extract_qdoc_content [--filter cmd1,cmd2,...] <file.qdoc>")
		fmt.Println()
		fmt.Println("Options:")
		flag.PrintDefaults()
		fmt.Println()
		fmt.Println("Examples:")
		fmt.Println("  extract_qdoc_content ../samples/sample.qdoc")
		fmt.Println("  extract_qdoc_content --filter title,brief ../samples/sample.qdoc")
	}
	flag.Parse()

	if flag.NArg() < 1 {
		flag.Usage()
		os.Exit(1)
	}

	filepath := flag.Arg(0)

	// Build filter set
	var filterSet map[string]bool
	if *filterFlag != "" {
		filterSet = make(map[string]bool)
		for _, cmd := range strings.Split(*filterFlag, ",") {
			filterSet[strings.TrimSpace(cmd)] = true
		}
	}

	// Read file
	source, err := os.ReadFile(filepath)
	if err != nil {
		fmt.Printf("Error reading file: %v\n", err)
		os.Exit(1)
	}

	// Create parser
	lang := sitter.NewLanguage(tree_sitter_qdoc.Language())
	parser := sitter.NewParser()
	err = parser.SetLanguage(lang)
	if err != nil {
		fmt.Printf("Error setting language: %v\n", err)
		os.Exit(1)
	}

	// Parse file
	tree := parser.Parse(source, nil)
	if tree == nil {
		fmt.Println("Error: Failed to parse file")
		os.Exit(1)
	}
	defer tree.Close()

	// Extract all content
	allCmds := extractAllCommandInstances(tree, source)
	allInlines := extractInlineCommands(tree, source)
	allSentences := extractAllSentences(tree, source)

	// Apply filter at display time
	cmds := filterCommands(allCmds, filterSet)
	inlines := filterInlines(allInlines, filterSet)

	// Separate block commands into topics vs others for display
	var topics, others []CommandInstance
	for _, c := range cmds {
		if topicCommands[c.Command] {
			topics = append(topics, c)
		} else {
			others = append(others, c)
		}
	}

	// Print results
	fmt.Println("======================================================================")
	fmt.Printf("QDoc Content Extraction: %s\n", filepath)
	if filterSet != nil {
		keys := make([]string, 0, len(filterSet))
		for k := range filterSet {
			keys = append(keys, k)
		}
		fmt.Printf("Filter: %s\n", strings.Join(keys, ", "))
	}
	fmt.Println("======================================================================")
	fmt.Println()

	// Topic commands
	if filterSet == nil || len(topics) > 0 {
		fmt.Println("TOPIC COMMANDS")
		fmt.Println("----------------------------------------------------------------------")
		if len(topics) > 0 {
			for _, t := range topics {
				fmt.Printf("  Line %3d: \\%-15s %s\n", t.Line, t.Command, t.Text)
			}
		} else {
			fmt.Println("  (none found)")
		}
		fmt.Println()
	}

	// Other matched commands (brief, title, section1, etc.)
	if filterSet == nil || len(others) > 0 {
		fmt.Println("OTHER COMMANDS")
		fmt.Println("----------------------------------------------------------------------")
		if len(others) > 0 {
			for _, c := range others {
				fmt.Printf("  Line %3d: \\%-15s %s\n", c.Line, c.Command, c.Text)
			}
		} else {
			fmt.Println("  (none found)")
		}
		fmt.Println()
	}

	// Inline commands
	if filterSet == nil || len(inlines) > 0 {
		fmt.Println("INLINE COMMANDS")
		fmt.Println("----------------------------------------------------------------------")
		if len(inlines) > 0 {
			for _, c := range inlines {
				fmt.Printf("  Line %3d: \\%-10s %s\n", c.Line, c.Command, c.Text)
			}
		} else {
			fmt.Println("  (none found)")
		}
		fmt.Println()
	}

	// Sentences
	fmt.Println("SENTENCES")
	fmt.Println("----------------------------------------------------------------------")
	if len(allSentences) > 0 {
		for _, cs := range allSentences {
			fmt.Printf("  Comment at line %d:\n", cs.Line)
			for i, s := range cs.Sentences {
				fmt.Printf("    %d. %s\n", i+1, s)
			}
		}
	} else {
		fmt.Println("  (none found)")
	}
	fmt.Println()

	// Summary
	fmt.Println("======================================================================")
	fmt.Printf("Found: %d block command(s), %d inline command(s), %d sentence(s)\n",
		len(cmds), len(inlines), func() int {
			n := 0
			for _, cs := range allSentences {
				n += len(cs.Sentences)
			}
			return n
		}())
	fmt.Println("======================================================================")
	fmt.Println()
}
