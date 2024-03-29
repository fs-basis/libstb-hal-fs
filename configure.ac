# explicit defines for separate revision handling
define(ver_major, 1)
define(ver_minor, 6)
define(ver_micro, 0)

# sync with current git
define(ver_git, m4_esyscmd([
	GITBRANCH=$(git rev-parse --abbrev-ref HEAD);
	GITDESCRIBE=$(git describe --always --tags --dirty);
	printf "$GITDESCRIBE $GITBRANCH"
]))

AC_PACKAGE_NAME, PACKAGE_NAME_LIBSTB_HAL
AC_INIT([Frankenstone-libstb-hal], [ver_major.ver_minor.ver_micro])
AM_INIT_AUTOMAKE
AC_CONFIG_HEADERS([libstb-hal-config.h:config.h.in])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES])
AC_CONFIG_MACRO_DIR([m4])
AC_GNU_SOURCE

AC_DEFINE(PACKAGE_VERSION_MAJOR, ver_major, [Major version number])
AC_DEFINE(PACKAGE_VERSION_MINOR, ver_minor, [Minor version number])
AC_DEFINE(PACKAGE_VERSION_MICRO, ver_micro, [Micro version number])
AC_DEFINE(PACKAGE_VERSION_GIT, "ver_git", [internal vcs version info])

TUXBOX_APPS
TUXBOX_APPS_DIRECTORY
TUXBOX_BOXTYPE

AC_PROG_CC
AC_PROG_CXX
PKG_PROG_PKG_CONFIG
## both disabled => libtool still defaults to static
##                  at least the libtool I tested with ;-)
## --enable-shared => build only shared
## --enable-shared --enable-static => build both
AC_DISABLE_SHARED
AC_DISABLE_STATIC
AC_SYS_LARGEFILE
AC_PROG_LIBTOOL

AC_ARG_ENABLE(flv2mpeg4,
	AS_HELP_STRING(--enable-flv2mpeg4, use flv2mpeg4 libeplayer3),
	,[enable_flv2mpeg4=no])

AM_CONDITIONAL(ENABLE_FLV2MPEG4, test "$enable_flv2mpeg4" = "yes")
if test "$enable_flv2mpeg4" = "yes"; then
	AC_DEFINE(ENABLE_FLV2MPEG4, 1, [use flv2mpeg4 libeplayer3])
fi

AC_OUTPUT([
Makefile
common/Makefile
libarmbox/Makefile
libduckbox/Makefile
libdvbci/Makefile
libeplayer3/Makefile
libeplayer3-sh4/Makefile
tools/Makefile
])
