KaNaPi contains build system to prepare basic system.
It is built from sources by using scripts. All sources are downloaded during build.
There are few methods to build KaNaPi.

1. Using configure and make
===========================

Run 'configure' script in one of the modes:
* chroot - to build KaNaPi in chroot using SBS image. SBS image is downloaded from Source Forge.
* local - to build full KaNaPi

Run 'make' command, and wait...

2. Using install scripts
========================

- make directory ${HOME}/src
  This directory will contain downloaded packages and source for compilation
- copy script cross_compilers/scripts/pkg_kanapi to your PATH, for example /usr/local/bin
- compile basic cross-compilers by running command
  ./install all
  in directory cross_compilers/x86 or cross_compilers/x86_64 or cross_compilers/arm.
  It depends on what target platform do you want to use.
- compile all packages in the directory kanapi_system/x86 or kanapi_system/x86_64 or kanapi_system/arm
  using command
  ./install all
- you can run install script with 'verbose' parameter, to see more details during compilation

Packages will be installed in ${HOME}/kanapi_${KANAPI_VER} directory for normal user,
or in /kanapi_${KANAPI_VER} for root.

3. Preparing new release
========================

- Update kanapi_system/scripts/KANAPI_VER file
- Similar to 2 method prepare cross-compilers
- Compile minimal set of packages in the directory kanapi_system/x86 or kanapi_system/x86_64 or kanapi_system/arm
  using command
  ./install sbs
- Prepare SBS, in directory kanapi_system/test_system run command
  ./prepare_sbs
- Update SBS. In main directory run ./configure update_sbs  
- Build root-filesystem using commands:
  ./configure chroot && make

