# KaNaPi project for x86_64 architecture

Main goal of this project is to create educational operating system based on Linux kernel
and free software for use at home.

Current phase: Beta

Versions: 

* development - v0.11

License: GPL v.3

## KaNaPi components

* Sbs - small build system: kanapi\_system/sbs
* Bbs - base build system, built on top of Sbs: kanapi\_system/kanapi-bbs
* Cli - command line tools built on top of Bbs: kanapi\_system/kanapi-cli
* Cbs - container build system, built on top of cli: kanapi\_system/kanapi-cbs
* X11 - X11 support, libs, apps, built on top of Cli: kanapi\_system/kanapi-x11
* Gui - Gtk2/3 and Qt support, libs built on top of X11: kanapi\_system/kanapi-gui
* Apps - Applications and libs built on top Gui: kanapi\_system/kanapi-apps

## Docker images

The simplest way to try KaNaPi is to use docker images from docker hub.

* SBS image  - https://hub.docker.com/r/kanapi/kanapi-sbs
* BBS image  - https://hub.docker.com/r/kanapi/kanapi-bbs
* CLI image  - https://hub.docker.com/r/kanapi/kanapi-cli
* X11 image  - https://hub.docker.com/r/kanapi/kanapi-x11
* GUI image  - https://hub.docker.com/r/kanapi/kanapi-gui
* APPS image - https://hub.docker.com/r/kanapi/kanapi-apps

Docker images versions are described [here](docker-images.md)

# Authors 

- Jacek Danecki
- Kamil Danecki
- Piotr Danecki

More details about KaNaPi on https://jdanecki.github.io/kanapi

[Changelog](doc/changelog)

## Adding new package to KaNaPi (for example to apps component)

* In git repository goto kanapi\_system/apps/packages
* Create directory for new package by running command

```
./create_directory <package_name> <package_version>
```

* Add URL to package repository by modifying <package_name>.kanapi file in
kanapi\_system/apps/packages/<package\_name>-<package\_version> directory

* Update EXT variable if needed in <package_name>.kanapi file. 

* Download package by calling command
```
cd kanapi_system/apps/build
./download <package_name>
```

* Prepare package sources by calling command

```
cd kanapi_system/apps/build
./prepare <package_name>
```

* Configure package  by calling command

```
cd kanapi_system/apps/build
./configure <package_name>
```

* Build package  by calling command

```
cd kanapi_system/apps/build
./build <package_name>
```

* Install package  by calling command

```
cd kanapi_system/apps/build
./install <package_name>
```

* Verify package installation by calling command

```
cd kanapi_system/apps/build
./verify <package_name>
```

* To get more info about others commands run

```
cd kanapi_system/apps/build
./help
```


