#Text only apps, libs 
#BBS is required to compile below targets

REPO_BASE=$(shell git rev-parse --show-toplevel)
SCRIPTS_DIR=$(REPO_BASE)/kanapi_system/scripts

include $(SCRIPTS_DIR)/Makefile.common

cli: cli-base llvm ocl docker-ce

cli-base: t_compression t_system devel vim bc sound 

cli-lib: pci_ids libusb udev libdrm libev libevdev cacert libsigcpp sound popt llvm babl \
	itstool gnutls lua yasm

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

bc:
	@$(RUN_TARGET)

rplay:
	@$(RUN_TARGET)

t_compression: gzip unrar zip xz

gzip:
	@$(RUN_TARGET)

unrar:
	@$(RUN_TARGET)

zip:
	@$(RUN_TARGET)

xz:
	@$(RUN_TARGET)

t_system: mc kmod procps-ng pciutils screen sdparm iotop ntfs-3g_ntfsprogs strace ltrace syslinux mbr nfs \
	wireless_tools wpa_supplicant dhcp wget network Hermes pci_ids usbutils udev libdrm libev libevdev \
	cacert cpio hdparm p11-kit iptables dmidecode

mc: 
	@$(RUN_TARGET)

kmod:
	@$(RUN_TARGET)

procps-ng:
	@$(RUN_TARGET)

pciutils:
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

libelf:
	@$(RUN_TARGET)

ltrace: libelf
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

network: iproute2 enet rsync lynx bridge-utils ethtool

iproute2:
	@$(RUN_TARGET)

enet:
	@$(RUN_TARGET)

Hermes:
	@$(RUN_TARGET)

devel: patchelf cgdb strace ltrace ctags chrpath vala syslinux mbr Hermes pci_ids makefile2graph scons lua tcl swig yajl ruby \
	database xml expect babl itstool libsigcpp yasm popt go elfutils

gdb:
	@$(RUN_TARGET)

cgdb: gdb
	@$(RUN_TARGET)

ctags:
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

sound: rplay alsa-utils esound gstreamer jack2 pulseaudio alsa-plugins alsa-oss sndio portaudio fluidsynth libmodplug sox

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

database: db gdbm

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

usbutils: libusb
	@$(RUN_TARGET)

udev:
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

llvm:
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

ocl: ocl-icd beignet clinfo clpeak

alsa-oss:
	@$(RUN_TARGET)

cpio:
	@$(RUN_TARGET)

rsync:
	@$(RUN_TARGET)

lynx:
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

docker-ce: cgroupfs-mount containerd runc moby-extras tini docker-machine
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

ethtool:
	@$(RUN_TARGET)

libsamplerate: fftw
	@$(RUN_TARGET)

fftw:
	@$(RUN_TARGET)
