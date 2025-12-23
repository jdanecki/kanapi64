#Text only sound apps, libs 
#CLI is required to compile below targets

REPO_BASE=$(shell git rev-parse --show-toplevel)
SCRIPTS_DIR:=$(REPO_BASE)/kanapi_system/scripts

include $(SCRIPTS_DIR)/Makefile.common

sound: alsa  pulseaudio
#	jack2 pulseaudio alsa-plugins alsa-oss

rplay:
	@$(RUN_TARGET)

alsa-ucm-conf:
	@$(RUN_TARGET)

alsa-lib: alsa-ucm-conf
	@$(RUN_TARGET)

alsa-utils: alsa-lib
	@$(RUN_TARGET)

alsa: alsa-utils

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

pulseaudio: 
	# libsndfile (cli)
	@$(RUN_TARGET)
#speexdsp intltool speex

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

libxml2:
	@$(RUN_TARGET)

alsa-oss:
	@$(RUN_TARGET)

sox:
	@$(RUN_TARGET)

libsamplerate: fftw
	@$(RUN_TARGET)

fftw:
	@$(RUN_TARGET)


opus:
	@$(RUN_TARGET)
