module github.com/veshivas/tree-sitter-qdoc/test/scripts

go 1.23

require (
	github.com/tree-sitter/go-tree-sitter v0.25.0
	github.com/veshivas/tree-sitter-qdoc v0.0.0
)

require github.com/mattn/go-pointer v0.0.1 // indirect

replace github.com/veshivas/tree-sitter-qdoc => ../..
