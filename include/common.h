/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef http_common_h
#define http_common_h

#define _USE_MATH_DEFINES /* for windows */

#include <stdint.h>
#include <stddef.h>
#include <float.h>
#include <stdbool.h>

#if defined(_MSC_VER)
#  ifdef HTTP_DLL
#    define HTTP_EXPORT __declspec(dllexport)
#  else
#    define HTTP_EXPORT __declspec(dllimport)
#  endif
#  define HTTP_INLINE __forceinline
#else
#  define HTTP_EXPORT __attribute__((visibility("default")))
#  define HTTP_INLINE static inline __attribute((always_inline))
#endif

#endif /* http_common_h */
