#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"

const char* xkbcommonName = "libxkbcommon.so.0";
#define ALTNAME "libxkbcommon.so"

#define LIBNAME xkbcommon

#include "wrappedlib_init.h"

