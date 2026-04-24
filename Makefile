ifeq ($(OS),Windows_NT)
$(error Windows is not supported)
endif

LANGUAGE_NAME := tree-sitter-qdoc
HOMEPAGE_URL := https://github.com/veshivas/tree-sitter-qdoc
VERSION := 0.2.0

# repository
SRC_DIR := src

TS ?= tree-sitter

# install directory layout
PREFIX ?= /usr/local
DATADIR ?= $(PREFIX)/share
INCLUDEDIR ?= $(PREFIX)/include
LIBDIR ?= $(PREFIX)/lib
PCLIBDIR ?= $(LIBDIR)/pkgconfig

# source/object files
PARSER := $(SRC_DIR)/parser.c
EXTRAS := $(filter-out $(PARSER),$(wildcard $(SRC_DIR)/*.c))
OBJS := $(patsubst %.c,%.o,$(PARSER) $(EXTRAS))

# flags
ARFLAGS ?= rcs
override CFLAGS += -I$(SRC_DIR) -std=c11 -fPIC

# ABI versioning
SONAME_MAJOR = $(shell sed -n 's/\#define LANGUAGE_VERSION //p' $(PARSER))
SONAME_MINOR = $(word 1,$(subst ., ,$(VERSION)))

# OS-specific bits
ifeq ($(shell uname),Darwin)
	SOEXT = dylib
	SOEXTVER_MAJOR = $(SONAME_MAJOR).$(SOEXT)
	SOEXTVER = $(SONAME_MAJOR).$(SONAME_MINOR).$(SOEXT)
	LINKSHARED = -dynamiclib -Wl,-install_name,$(LIBDIR)/lib$(LANGUAGE_NAME).$(SOEXTVER),-rpath,@executable_path/../Frameworks
else
	SOEXT = so
	SOEXTVER_MAJOR = $(SOEXT).$(SONAME_MAJOR)
	SOEXTVER = $(SOEXT).$(SONAME_MAJOR).$(SONAME_MINOR)
	LINKSHARED = -shared -Wl,-soname,lib$(LANGUAGE_NAME).$(SOEXTVER)
endif
ifneq ($(filter $(shell uname),FreeBSD NetBSD DragonFly),)
	PCLIBDIR := $(PREFIX)/libdata/pkgconfig
endif

all: lib$(LANGUAGE_NAME).a lib$(LANGUAGE_NAME).$(SOEXT) $(LANGUAGE_NAME).pc

lib$(LANGUAGE_NAME).a: $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

lib$(LANGUAGE_NAME).$(SOEXT): $(OBJS)
	$(CC) $(LDFLAGS) $(LINKSHARED) $^ $(LDLIBS) -o $@
ifneq ($(STRIP),)
	$(STRIP) $@
endif

$(LANGUAGE_NAME).pc: bindings/c/$(LANGUAGE_NAME).pc.in
	sed -e 's|@PROJECT_VERSION@|$(VERSION)|' \
		-e 's|@CMAKE_INSTALL_LIBDIR@|$(LIBDIR:$(PREFIX)/%=%)|' \
		-e 's|@CMAKE_INSTALL_INCLUDEDIR@|$(INCLUDEDIR:$(PREFIX)/%=%)|' \
		-e 's|@PROJECT_DESCRIPTION@|$(DESCRIPTION)|' \
		-e 's|@PROJECT_HOMEPAGE_URL@|$(HOMEPAGE_URL)|' \
		-e 's|@CMAKE_INSTALL_PREFIX@|$(PREFIX)|' $< > $@

$(PARSER): $(SRC_DIR)/grammar.json
	$(TS) generate $^

install: all
	install -d '$(DESTDIR)$(DATADIR)'/tree-sitter/queries/tree-sitter-qdoc '$(DESTDIR)$(INCLUDEDIR)'/tree_sitter '$(DESTDIR)$(PCLIBDIR)' '$(DESTDIR)$(LIBDIR)'
	install -m644 bindings/c/tree_sitter/$(LANGUAGE_NAME).h '$(DESTDIR)$(INCLUDEDIR)'/tree_sitter/$(LANGUAGE_NAME).h
	install -m644 $(LANGUAGE_NAME).pc '$(DESTDIR)$(PCLIBDIR)'/$(LANGUAGE_NAME).pc
	install -m644 lib$(LANGUAGE_NAME).a '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).a
	install -m755 lib$(LANGUAGE_NAME).$(SOEXT) '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXTVER)
	ln -sf lib$(LANGUAGE_NAME).$(SOEXTVER) '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXTVER_MAJOR)
	ln -sf lib$(LANGUAGE_NAME).$(SOEXTVER_MAJOR) '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXT)
ifneq ($(wildcard queries/*.scm),)
	install -m644 queries/*.scm '$(DESTDIR)$(DATADIR)'/tree-sitter/queries/tree-sitter-qdoc
endif

uninstall:
	$(RM) '$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).a \
		'$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXTVER) \
		'$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXTVER_MAJOR) \
		'$(DESTDIR)$(LIBDIR)'/lib$(LANGUAGE_NAME).$(SOEXT) \
		'$(DESTDIR)$(INCLUDEDIR)'/tree_sitter/$(LANGUAGE_NAME).h \
		'$(DESTDIR)$(PCLIBDIR)'/$(LANGUAGE_NAME).pc
	$(RM) -r '$(DESTDIR)$(DATADIR)'/tree-sitter/queries/tree-sitter-qdoc

clean:
	$(RM) $(OBJS) $(LANGUAGE_NAME).pc lib$(LANGUAGE_NAME).a lib$(LANGUAGE_NAME).$(SOEXT)

test:
	$(TS) test

# ---------------------------------------------------------------------------
# Release targets — build parser libraries for all platforms and upload
# to the GitHub release for the current VERSION tag.
#
# Prerequisites (macOS):
#   brew install gh mingw-w64 FiloSottile/musl-cross/musl-cross
#   gh auth login
#
# Usage:
#   make release-libs          # build all platform libraries
#   make release-upload        # upload built libraries to GitHub release
#   make release               # build + upload in one step
# ---------------------------------------------------------------------------

RELEASE_DIR    := dist
RELEASE_TAG    := v$(VERSION)
SRCS           := src/parser.c src/scanner.c
CFLAGS_RELEASE := -fPIC -I./src

# Intermediate library filenames (build artefacts, not uploaded directly)
LIB_MACOS_ARM64  := $(RELEASE_DIR)/libtree-sitter-qdoc-macos-arm64.dylib
LIB_MACOS_X86    := $(RELEASE_DIR)/libtree-sitter-qdoc-macos-x86_64.dylib
LIB_LINUX_X86    := $(RELEASE_DIR)/libtree-sitter-qdoc-linux-x86_64.so
LIB_LINUX_ARM64  := $(RELEASE_DIR)/libtree-sitter-qdoc-linux-arm64.so
LIB_WINDOWS_X86  := $(RELEASE_DIR)/tree-sitter-qdoc-windows-x86_64.dll

# Release archive filenames (what gets uploaded)
ARCHIVE_MACOS_ARM64  := $(RELEASE_DIR)/tree-sitter-qdoc-macos-arm64.tar.gz
ARCHIVE_MACOS_X86    := $(RELEASE_DIR)/tree-sitter-qdoc-macos-x86_64.tar.gz
ARCHIVE_LINUX_X86    := $(RELEASE_DIR)/tree-sitter-qdoc-linux-x86_64.tar.gz
ARCHIVE_LINUX_ARM64  := $(RELEASE_DIR)/tree-sitter-qdoc-linux-arm64.tar.gz
ARCHIVE_WINDOWS_X86  := $(RELEASE_DIR)/tree-sitter-qdoc-windows-x86_64.zip

ALL_ARCHIVES := \
	$(ARCHIVE_MACOS_ARM64) \
	$(ARCHIVE_MACOS_X86) \
	$(ARCHIVE_LINUX_X86) \
	$(ARCHIVE_LINUX_ARM64) \
	$(ARCHIVE_WINDOWS_X86)

release-libs: $(RELEASE_DIR) $(ALL_ARCHIVES)

$(RELEASE_DIR):
	mkdir -p $(RELEASE_DIR)

$(LIB_MACOS_ARM64): $(SRCS)
	cc -dynamiclib $(CFLAGS_RELEASE) -target arm64-apple-macos11 $^ -o $@

$(LIB_MACOS_X86): $(SRCS)
	cc -dynamiclib $(CFLAGS_RELEASE) -target x86_64-apple-macos10.15 $^ -o $@

$(LIB_LINUX_X86): $(SRCS)
	x86_64-linux-musl-gcc -shared $(CFLAGS_RELEASE) $^ -o $@

$(LIB_LINUX_ARM64): $(SRCS)
	aarch64-linux-musl-gcc -shared $(CFLAGS_RELEASE) $^ -o $@

$(LIB_WINDOWS_X86): $(SRCS)
	x86_64-w64-mingw32-gcc -shared $(CFLAGS_RELEASE) $^ -o $@

$(ARCHIVE_MACOS_ARM64): $(LIB_MACOS_ARM64)
	shasum -a 256 $< > $<.sha256
	tar -czf $@ -C $(RELEASE_DIR) $(notdir $<) $(notdir $<).sha256 -C .. CHANGELOG.md LICENSE

$(ARCHIVE_MACOS_X86): $(LIB_MACOS_X86)
	shasum -a 256 $< > $<.sha256
	tar -czf $@ -C $(RELEASE_DIR) $(notdir $<) $(notdir $<).sha256 -C .. CHANGELOG.md LICENSE

$(ARCHIVE_LINUX_X86): $(LIB_LINUX_X86)
	shasum -a 256 $< > $<.sha256
	tar -czf $@ -C $(RELEASE_DIR) $(notdir $<) $(notdir $<).sha256 -C .. CHANGELOG.md LICENSE

$(ARCHIVE_LINUX_ARM64): $(LIB_LINUX_ARM64)
	shasum -a 256 $< > $<.sha256
	tar -czf $@ -C $(RELEASE_DIR) $(notdir $<) $(notdir $<).sha256 -C .. CHANGELOG.md LICENSE

$(ARCHIVE_WINDOWS_X86): $(LIB_WINDOWS_X86)
	shasum -a 256 $< > $<.sha256
	cd $(RELEASE_DIR) && zip $(notdir $@) $(notdir $<) $(notdir $<).sha256 && \
		zip $(notdir $@) -j ../CHANGELOG.md ../LICENSE


PREV_TAG = $(shell git describe --tags --abbrev=0 $(RELEASE_TAG)^ 2>/dev/null)

$(RELEASE_DIR)/release-notes.md: | $(RELEASE_DIR)
	@{ \
	  if [ -n "$(PREV_TAG)" ]; then \
	    git log $(PREV_TAG)..$(RELEASE_TAG) --oneline; \
	  else \
	    git log $(RELEASE_TAG) --oneline; \
	  fi; \
	} | grep -E '^[a-f0-9]+ (feat|fix)(\([^)]+\))?!?:' \
	  | sed 's/^[a-f0-9]* /- /' \
	  > $@

release-create: $(RELEASE_DIR)/release-notes.md
	gh release create $(RELEASE_TAG) \
		--title "$(RELEASE_TAG)" \
		--notes-file $(RELEASE_DIR)/release-notes.md

release-upload:
	gh release upload $(RELEASE_TAG) \
		$(RELEASE_DIR)/*.tar.gz \
		$(RELEASE_DIR)/*.zip \
		--clobber

release: release-create release-libs release-upload

release-clean:
	rm -rf $(RELEASE_DIR)

.PHONY: all install uninstall clean test \
        release-libs release-create release-upload release release-clean
