#include <stdio.h>
#include <stdarg.h>
#include "debug.h"

static int input_debug_level = 0;

void set_debug_level(int debug_level) {
    input_debug_level = debug_level;
}

int dprintf(int debug_level, const char *fmt, ...){
    int result = 0;

    if (debug_level <= input_debug_level) {
        va_list args;
        va_start(args, fmt);

        fprintf(stderr, "[DBG%d]", debug_level);
        result = vfprintf(stderr, fmt, args);

        va_end(args);
    }

    return result;
}
