# Prepwork for kanapi 0.13

## Chroots/images - to test all new changes
- [ ] Fully switch from dockers to chroots.
- [x] Allow creating chroots from host using selected packages
  - [ ] Allow to specify version (or to omit it) ex: `foo bar-5.12 hello cmake cmake-3.smth` would fetch: newest foo, bar-5.12, newest hello, newest cmake and cmake-3.smth (with deps)
  - [ ] Nice if it would be in file, not as arguments
  - [ ] With deps (./create_chroot neovim => creates a chroot using host-built packages (or compiles them), with all deps (like lua for neovim))
  - [ ] Allow using `@cli` tag (example) to fetch all packages from cli + deps
  - [ ] Testsystem with chroots (pulls packages from a pre-defined file, tries to install package, display failures)

## Cross-directory dependencies (package from app will require another package from cli)
- [ ] fix chroot automation to work with dross-directory dependencies

## Movement
- [ ] Move xapps from x11 to apps (or create a new directory with xapps).
- [ ] Pull some apps out of cli. Create a cli-base and cli-apps. cli-base (with sbs and bbs) will be distributed as a minimal chroot (and release).
- [ ] Fully migrate all packages related to sound to the sound directory.

## Fix ./configure running ./configure on deps instead of ./install (fix weird build system behaviour)
- [ ] ./install would run ./install-deps (a new script) and then install the package (if there's no flag specified like `--no-deps` as an example)
- [ ] ./install-deps would install all dependencies, but it wouldn't install the package
- [ ] Call verify on deps before compiling
- [ ] ./configure ./prepare etc wouldn't deal with dependencies

## Add pkg_install_manual (for manpages) (and ***perhaps*** figure out why xsltproc is acting up)


# Actually building of kanapi 0.13, not prepwork

## Remove
- [ ] busybox

## Build
- [ ] Add python packages directory with pip packages
- [ ] java
- [ ] wasi support in clang for firefox (???)
- [ ] gtk+3 with gobject and introspection support.


# not as important, but still cool

## Publishing
- [ ] Release KaNaPi 13 AND KaNaPi 12 as chroot (instead of docker) (sbs/bbs/cli)
  - [ ] + .iso image
- [ ] ***Perhaps*** distribute gui chroot/image.
- [ ] ~Obsolete `pkg` or~ host new binary packages.
- [ ] Switch to codeberg (github is getting worse and worse)

## Documentation - in case I get dementia


# not really TODO, just documentation for how to deal with old versions
- do not remove old apps/libs (keep them), just move them to new directories if needed
- [ ] ~archive old apps?~
- [ ] ~create archive directories?~
