#include <config.h>
#if HAVE_DUCKBOX_HARDWARE
#include "../libduckbox/audio_lib.h"
#include "../libduckbox/audio_mixer.h"
#elif HAVE_ARM_HARDWARE
#include "../libarmbox/audio_lib.h"
#else
#error no valid hardware defined
#endif
