#include <config.h>
#if HAVE_DUCKBOX_HARDWARE
#include "../libduckbox/video_lib.h"
#elif HAVE_SPARK_HARDWARE
#include "../libspark/video_lib.h"
#elif HAVE_ARM_HARDWARE
#include "../libarmbox/video_lib.h"
#include "../libarmbox/hdmi_cec.h"
#else
#error no valid hardware defined
#endif

#if STB_HAL_VIDEO_HAS_GETSCREENIMAGE
#define SCREENSHOT 1
#endif
