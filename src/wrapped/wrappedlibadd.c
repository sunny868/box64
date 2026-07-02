#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"
#include "emu/x64emu_private.h"
#include "callback.h"
#include "librarian.h"
#include "box64context.h"
#include "emu/x64emu_private.h"

const char* libaddName = "libadd.so";
#define ALTNAME "libadd.so"

#define LIBNAME libadd

// for GOM
#include "generated/wrappedlibdltypes.h"
#include "wrappercallback.h"

//EXPORT int my_testAdd(x64emu_t* emu,  int a, int b) {
//    int ret = my->testAdd(a, b);
//    fprintf(stderr, "my_testAdd return: %d \n", ret);
//    return ret;
//}

#include "wrappedlib_init.h"
