ACLOCAL_AMFLAGS = -I m4

lib_LTLIBRARIES = libstb-hal.la
libstb_hal_la_SOURCES =
SUBDIRS = common tools

libstb_hal_la_LIBADD = \
	common/libcommon.la

#bin_PROGRAMS = libstb-hal-test
#libstb_hal_test_SOURCES = libtest.cpp
#libstb_hal_test_LDADD = libstb-hal.la

if BOXTYPE_DUCKBOX
#libstb_hal_test_LDADD += -lasound
SUBDIRS += libduckbox libeplayer3-sh4 libdvbci
libstb_hal_la_LIBADD += \
	libduckbox/libduckbox.la \
	libeplayer3-sh4/libeplayer3_sh4.la \
	libdvbci/libdvbci.la
endif

if BOXTYPE_ARMBOX
#libstb_hal_test_LDADD += -lasound
SUBDIRS += libarmbox libdvbci
libstb_hal_la_LIBADD += \
	libarmbox/libarmbox.la \
	libdvbci/libdvbci.la

SUBDIRS += libeplayer3
libstb_hal_la_LIBADD += \
	libeplayer3/libeplayer3.la
endif

pkginclude_HEADERS = \
	include/audio_hal.h \
	include/ca.h \
	include/ca_ci.h \
	include/ca_hal.h \
	include/cs_types.h \
	include/dmx_hal.h \
	include/hardware_caps.h \
	include/init.h \
	include/mmi.h \
	include/playback_hal.h \
	include/pwrmngr.h \
	include/record_hal.h \
	include/version_hal.h \
	include/video_hal.h
