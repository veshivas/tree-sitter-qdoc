package tree_sitter_qdoc_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_qdoc "github.com/veshivas/tree-sitter-qdoc/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_qdoc.Language())
	if language == nil {
		t.Errorf("Error loading Tree-sitter parser for QDoc markup grammar")
	}
}
