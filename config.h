/* Manually configured for Android.

Copyright (C) 2023 Free Software Foundation, Inc.

This file is part of GNU Emacs.

GNU Emacs is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.

GNU Emacs is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Emacs.  If not, see <https://www.gnu.org/licenses/>.  */

/* The normal alignment of `struct{char;}', in bytes. */
#define ALIGNOF_STRUCT_CHAR__ 1

/* Define to 1 if you have the `atexit' function. */
#define HAVE_ATEXIT 1

/* Have cairo graphics library */
#undef HAVE_CAIRO

/* Have cairo-ft support in cairo graphics library */
#undef HAVE_CAIRO_FT

/* Define to 1 if you have the
   `cairo_user_font_face_set_render_color_glyph_func' function. */
#undef HAVE_CAIRO_USER_FONT_FACE_SET_RENDER_COLOR_GLYPH_FUNC

/* Have chafa terminal graphics library */
#undef HAVE_CHAFA

/* Have Core Text backend */
#undef HAVE_CORETEXT

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Have DirectWrite library */
#undef HAVE_DIRECTWRITE

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <dwrite_1.h> header file. */
#define HAVE_DWRITE_1_H 1

/* Have FreeType 2 library */
#undef HAVE_FREETYPE

/* Define to 1 if you have the `FT_Done_MM_Var' function. */
#undef HAVE_FT_DONE_MM_VAR

/* Define to 1 if you have the `FT_Get_Transform' function. */
#undef HAVE_FT_GET_TRANSFORM

/* Define to 1 if you have the `FT_Get_Var_Blend_Coordinates' function. */
#undef HAVE_FT_GET_VAR_BLEND_COORDINATES

/* Define to 1 if you have the `FT_Set_Var_Blend_Coordinates' function. */
#undef HAVE_FT_SET_VAR_BLEND_COORDINATES

/* Have GDI library */
#undef HAVE_GDI

/* Define to 1 if you have the `getpagesize' function. */
#undef HAVE_GETPAGESIZE

/* Have glib2 library */
#undef HAVE_GLIB

/* Have gobject2 library */
#undef HAVE_GOBJECT

/* Have Graphite2 library */
#undef HAVE_GRAPHITE2

/* Have ICU library */
#undef HAVE_ICU

/* Use hb-icu Unicode callbacks */
#undef HAVE_ICU_BUILTIN

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H

/* Define to 1 if you have the `isatty' function. */
#undef HAVE_ISATTY

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP

/* Define to 1 if you have the `mprotect' function. */
#define HAVE_MPROTECT

/* Define to 1 if you have the `newlocale' function. */
#undef HAVE_NEWLOCALE

/* Have POSIX threads */
#undef HAVE_PTHREAD

/* Have PTHREAD_PRIO_INHERIT. */
#undef HAVE_PTHREAD_PRIO_INHERIT

/* Define to 1 if you have the <stdbool.h> header file. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `sysconf' function. */
#undef HAVE_SYSCONF

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Have Uniscribe library */
#undef HAVE_UNISCRIBE

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `uselocale' function. */
#undef HAVE_USELOCALE

/* Define to 1 if you have the <usp10.h> header file. */
#undef HAVE_USP10_H

/* Define to 1 if you have the <windows.h> header file. */
#undef HAVE_WINDOWS_H

/* Define to 1 if you have the <xlocale.h> header file. */
#undef HAVE_XLOCALE_H

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#undef LT_OBJDIR

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-gnu-emacs@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "HarfBuzz (Emacs)"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "HarfBuzz (Emacs) 7.1.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "harfbuzz-7.1.0-emacs"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://gnu.org/software/emacs"

/* Define to the version of this package. */
#define PACKAGE_VERSION "7.1.0"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
#undef PTHREAD_CREATE_JOINABLE

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS
