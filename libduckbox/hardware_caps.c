/*
 * determine the capabilities of the hardware.
 * part of libstb-hal
 *
 * (C) 2010-2012 Stefan Seyfried
 *
 * License: GPL v2 or later
 */

#include <config.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <hardware_caps.h>

static int initialized = 0;
static hw_caps_t caps;

hw_caps_t *get_hwcaps(void)
{
	if (initialized)
		return &caps;

	memset(&caps, 0, sizeof(hw_caps_t));

	if (access("/dev/dvb/adapter0/video1", F_OK) != -1)
		caps.can_pip = 1;

#if BOXMODEL_UFS910
	initialized = 1;
	strcpy(caps.boxvendor, "KATHREIN");
	strcpy(caps.boxname, "UFS910");
	strcpy(caps.boxarch, "STX7100");
	caps.can_shutdown = 1;
	caps.has_HDMI = 1;
	caps.has_SCART = 1;
//	caps.has_SCART_input = 1;
	caps.can_cec = 0;
	caps.has_CI = 2;
	caps.display_can_set_brightness = 1;
	caps.display_can_deepstandby = 0;
	caps.display_has_statusline = 0;
	caps.display_type = HW_DISPLAY_LINE_TEXT;
	caps.display_xres = 16;
#endif
#if BOXMODEL_UFS912
	initialized = 1;
	strcpy(caps.boxvendor, "KATHREIN");
	strcpy(caps.boxname, "UFS912");
	strcpy(caps.boxarch, "STX7111");
	caps.can_shutdown = 1;
	caps.has_HDMI = 1;
	caps.has_SCART = 1;
//	caps.has_SCART_input = 1;
	caps.can_cec = 1;
	caps.has_CI = 2;
	caps.display_can_set_brightness = 1;
	caps.display_can_deepstandby = 0;
	caps.display_has_statusline = 0;
	caps.display_type = HW_DISPLAY_LINE_TEXT;
	caps.display_xres = 16;
#endif
#if BOXMODEL_UFS913
	initialized = 1;
	strcpy(caps.boxvendor, "KATHREIN");
	strcpy(caps.boxname, "UFS913");
	strcpy(caps.boxarch, "STX7105");
	caps.can_shutdown = 1;
	caps.has_HDMI = 1;
	caps.has_SCART = 1;
//	caps.has_SCART_input = 1;
	caps.can_cec = 1;
	caps.has_CI = 2;
	caps.display_can_set_brightness = 1;
	caps.display_can_deepstandby = 0;
	caps.display_has_statusline = 0;
	caps.display_type = HW_DISPLAY_LINE_TEXT;
	caps.display_xres = 16;
#endif
#if BOXMODEL_UFS922
	initialized = 1;
	strcpy(caps.boxvendor, "KATHREIN");
	strcpy(caps.boxname, "UFS922");
	strcpy(caps.boxarch, "STX7109");
	caps.can_shutdown = 1;
	caps.has_HDMI = 1;
	caps.has_SCART = 1;
	caps.can_cec = 0;
	caps.has_CI = 2;
	caps.display_can_set_brightness = 1;
	caps.display_can_deepstandby = 0;
	caps.display_has_statusline = 0;
	caps.display_type = HW_DISPLAY_LINE_TEXT;
	caps.display_xres = 16;
#endif
	return &caps;
}
