#Text only apps, libs 
#BBS is required to compile below targets

REPO_BASE=$(shell git rev-parse --show-toplevel)
SCRIPTS_DIR:=$(REPO_BASE)/kanapi_system/scripts

include $(SCRIPTS_DIR)/Makefile.common

cli: cli-base cli-devel 
	
cli-base: t_compression t_system vim bc neovim

cli-devel: devel1

docker: docker-ce

boot: syslinux mbr linux

cli-lib: pci_ids libusb udev libdrm libev libevdev cacert libsigcpp sound popt llvm babl \
	itstool gnutls lua yasm

disabled: ntfs-3g_ntfsprogs nfs llvm iotop wget enet Hermes libdrm rplay esound gstreamer \
	sndio portaudio fluidsynth libmodplug sox  udev vala ctags db

linux:
	@$(RUN_TARGET)

linux-firmware:
	@$(RUN_TARGET)

rtl8188eu:
	@$(RUN_TARGET)

patchelf:
	@$(RUN_TARGET)

vim:
	@$(RUN_TARGET)

bc: ed
	@$(RUN_TARGET)

rplay:
	@$(RUN_TARGET)

t_compression: gzip unrar lzip
#zip

gzip:
	@$(RUN_TARGET)

unrar:
	@$(RUN_TARGET)

zip:
	@$(RUN_TARGET)

xz:
	@$(RUN_TARGET)

t_system: mc procps-ng pciutils screen sdparm strace \
	 network pci_ids eudev usbutils cpio hdparm \
	 iptables dmidecode tmux lm-sensors zsh libev
#	 libevdev cacert  p11-kit

mc: 
	@$(RUN_TARGET)

meson:
	pip3 install meson
	ln -sfv $(KANAPI_BASE)/Python-$(Python_ver)/bin/$@ /bin/$@

kmod: meson zstd
	@$(RUN_TARGET)

procps-ng:
	@$(RUN_TARGET)

pciutils: kmod
	@$(RUN_TARGET)

screen:
	@$(RUN_TARGET)

sdparm:
	@$(RUN_TARGET)

iotop:
	@$(RUN_TARGET)

ntfs-3g_ntfsprogs:
	@$(RUN_TARGET)

strace:
	@$(RUN_TARGET)

#libelf:
#	@$(RUN_TARGET)

ltrace: elfutils
	@$(RUN_TARGET)

nasm:
	@$(RUN_TARGET)

syslinux: nasm
	@$(RUN_TARGET)

dhcp:
	@$(RUN_TARGET)

mbr: bin86
	@$(RUN_TARGET)

bin86:
	@$(RUN_TARGET)

libtirpc:
	@$(RUN_TARGET)

rpcbind: libtirpc
	@$(RUN_TARGET)

libevent:
	@$(RUN_TARGET)

libnfsidmap:
	@$(RUN_TARGET)

nfs-utils: rpcbind libevent libnfsidmap
	@$(RUN_TARGET)

nfs: nfs-utils

wireless_tools:
	@$(RUN_TARGET)

wpa_supplicant: libnl
	@$(RUN_TARGET)

libnl:
	@$(RUN_TARGET)

gnutls: nettle
	@$(RUN_TARGET)

nettle:
	@$(RUN_TARGET)

wget: gnutls
	@$(RUN_TARGET)

network: wireless_tools wpa_supplicant dhcp iproute2 lynx ethtool rsync
	#bridge-utils

iproute2:
	@$(RUN_TARGET)

enet:
	@$(RUN_TARGET)

Hermes:
	@$(RUN_TARGET)

devel1: patchelf cgdb strace ltrace universal-ctags chrpath lua makefile2graph 

devel2: scons tcl swig yajl ruby database xml expect babl itstool \
	libsigcpp yasm popt go

gdb:
	@$(RUN_TARGET)

cgdb: gdb
	@$(RUN_TARGET)

ctags:
	@$(RUN_TARGET)

universal-ctags:
	@$(RUN_TARGET)
	
chrpath:
	@$(RUN_TARGET)

vala:
	@$(RUN_TARGET)

makefile2graph:
	@$(RUN_TARGET)

scons:
	@$(RUN_TARGET)

lua:
	@$(RUN_TARGET)


apps_txt: gzip mc vim kmod procps-ng bc pciutils wireless_tools wpa_supplicant dhcp screen sdparm iotop wget usbutils rplay \
	ntfs-3g_ntfsprogs unrar

sound: alsa-utils jack2 pulseaudio alsa-plugins alsa-oss

alsa-lib:
	@$(RUN_TARGET)

alsa-utils: alsa-lib
	@$(RUN_TARGET)

audiofile:
	@$(RUN_TARGET)

esound: audiofile
	@$(RUN_TARGET)

libunwind:
	@$(RUN_TARGET)

gstreamer: libunwind
	@$(RUN_TARGET)

jack2: libsndfile libsamplerate
	@$(RUN_TARGET)

XML-Parser:
	@$(RUN_TARGET)

expat:
	@$(RUN_TARGET)

intltool: xml
	@$(RUN_TARGET)

pulseaudio: speexdsp intltool speex
	@$(RUN_TARGET)

libvorbis: libogg
	@$(RUN_TARGET)

libogg:
	@$(RUN_TARGET)

libsndfile: libvorbis flac
	@$(RUN_TARGET)

speex:
	@$(RUN_TARGET)

speexdsp:
	@$(RUN_TARGET)

alsa-plugins:
	@$(RUN_TARGET)

sndio:
	@$(RUN_TARGET)

fluidsynth:
	@$(RUN_TARGET)

libmodplug:
	@$(RUN_TARGET)

flac:
	@$(RUN_TARGET)

portaudio:
	@$(RUN_TARGET)

database: gdbm

db:
	@$(RUN_TARGET)

gdbm:
	@$(RUN_TARGET)

gpm:
	@$(RUN_TARGET)

pci_ids:
	@$(RUN_TARGET)

libusb:
	@$(RUN_TARGET)

#usbutils7: libusb
#	@$(RUN_TARGET)

usbutils: libusb
	@$(RUN_TARGET)

udev: pci_ids
	@$(RUN_TARGET)

xml: XML-Simple libxml2

XML-NamespaceSupport:
	@$(RUN_TARGET)

XML-SAX-Base:
	@$(RUN_TARGET)

XML-SAX: XML-NamespaceSupport XML-SAX-Base
	@$(RUN_TARGET)

XML-SAX-Expat: XML-SAX
	@$(RUN_TARGET)

XML-Simple: expat XML-Parser XML-SAX-Expat
	@$(RUN_TARGET)

libpciaccess:
	@$(RUN_TARGET)

libdrm: libpciaccess
	@$(RUN_TARGET)

tcl:
	@$(RUN_TARGET)

pcre:
	@$(RUN_TARGET)

swig: pcre
	@$(RUN_TARGET)

yajl:
	@$(RUN_TARGET)

libev:
	@$(RUN_TARGET)

libevdev:
	@$(RUN_TARGET)

llvm: SPIRV-Tools SPIRV-LLVM-Translator
	@$(RUN_TARGET)

cacert:
	@$(RUN_TARGET)

libxml2:
	@$(RUN_TARGET)

expect:
	@$(RUN_TARGET)

babl:
	@$(RUN_TARGET)

itstool:
	@$(RUN_TARGET)

libsigcpp:
	@$(RUN_TARGET)

yasm:
	@$(RUN_TARGET)

popt:
	@$(RUN_TARGET)

ruby:
	@$(RUN_TARGET)

ocl-icd:
	@$(RUN_TARGET)

beignet:
	@$(RUN_TARGET)

clinfo:
	@$(RUN_TARGET)

clpeak:
	@$(RUN_TARGET)

ocl: ocl-icd beignet clinfo clpeak numactl

alsa-oss:
	@$(RUN_TARGET)

cpio:
	@$(RUN_TARGET)

rsync: xxHash lz4 zstd
	@$(RUN_TARGET)

lynx: gnutls
	@$(RUN_TARGET)

hdparm:
	@$(RUN_TARGET)

go:
	@$(RUN_TARGET)

bridge-utils:
	@$(RUN_TARGET)

p11-kit: libtasn1
	@$(RUN_TARGET)

libtasn1:
	@$(RUN_TARGET)

#go moby-extras docker-machine tini
docker-ce: cgroupfs-mount containerd runc
	@$(RUN_TARGET)

cgroupfs-mount:
	@$(RUN_TARGET)

containerd:
	@$(RUN_TARGET)

iptables:
	@$(RUN_TARGET)

runc:
	@$(RUN_TARGET)

moby-extras:
	@$(RUN_TARGET)

tini:
	@$(RUN_TARGET)

docker-machine:
	@$(RUN_TARGET)

sox:
	@$(RUN_TARGET)

dmidecode:
	@$(RUN_TARGET)

elfutils:
	@$(RUN_TARGET)

libmnl:
	@$(RUN_TARGET)

ethtool: libmnl
	@$(RUN_TARGET)

libsamplerate: fftw
	@$(RUN_TARGET)

fftw:
	@$(RUN_TARGET)

numactl:
	@$(RUN_TARGET)

pocl:
	@$(RUN_TARGET)

lm-sensors:
	@$(RUN_TARGET)

bluez:
	@$(RUN_TARGET)

libical:
	@$(RUN_TARGET)

libclc:
	@$(RUN_TARGET)

SPIRV-LLVM-Translator:
	@$(RUN_TARGET)

opencl-clang: llvm SPIRV-LLVM-Translator 
	@$(RUN_TARGET)

intel-graphics-compiler: opencl-clang
	@$(RUN_TARGET)

gmmlib:
	@$(RUN_TARGET)

compute-runtime: gmmlib intel-graphics-compiler
	@$(RUN_TARGET)

gperf:
	@$(RUN_TARGET)

eudev: gperf
	@$(RUN_TARGET)

lzip:
	@$(RUN_TARGET)

ed:
	@$(RUN_TARGET)

tmux: libevent
	@$(RUN_TARGET)

links: 
	@$(RUN_TARGET)

svgalib:
	@$(RUN_TARGET)

zstd:
	@$(RUN_TARGET)

xxHash:
	@$(RUN_TARGET)

lz4:
	@$(RUN_TARGET)

zsh:
	@$(RUN_TARGET)

neovim: 
#	libiconv luv
	@$(RUN_TARGET)

libiconv:
	@$(RUN_TARGET)

libuv:
	@$(RUN_TARGET)

luv: libuv LuaJIT
	@$(RUN_TARGET)

LuaJIT:
	@$(RUN_TARGET)

luarocks:
	@$(RUN_TARGET)

man-db: libpipeline gdbm
	@$(RUN_TARGET)

libpipeline:
	@$(RUN_TARGET)

SPIRV-Tools:
	@$(RUN_TARGET)
