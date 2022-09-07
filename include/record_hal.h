#include <config.h>
#if HAVE_DUCKBOX_HARDWARE
#include "../libduckbox/record_lib.h"
#elif HAVE_SPARK_HARDWARE
#include "../libspark/record_lib.h"
#elif HAVE_ARM_HARDWARE
#include "../libarmbox/record_lib.h"
#else
#error no valid hardware defined
#endif
