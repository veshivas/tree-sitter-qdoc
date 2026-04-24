from unittest import TestCase

import tree_sitter
import tree_sitter_qdoc


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_qdoc.language())
        except Exception:
            self.fail("Error loading Tree-sitter parser for QDoc markup grammar")
