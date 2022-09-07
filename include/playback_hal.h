#include <config.h>
#if HAVE_DUCKBOX_HARDWARE
#include "../libduckbox/playback_libeplayer3.h"
#elif HAVE_SPARK_HARDWARE
#include "../libspark/playback_libeplayer3.h"
#elif HAVE_ARM_HARDWARE
#include "../libarmbox/playback_libeplayer3.h"
#else
#error no valid hardware defined
#endif
