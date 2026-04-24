import XCTest
import SwiftTreeSitter
import TreeSitterQdoc

final class TreeSitterQdocTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_qdoc())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Qdoc grammar")
    }
}
