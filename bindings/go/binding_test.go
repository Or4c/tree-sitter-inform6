package tree_sitter_Inform6_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-Inform6"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_Inform6.Language())
	if language == nil {
		t.Errorf("Error loading Inform6 grammar")
	}
}
