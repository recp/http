/*
* Copyright (c), Recep Aslantas.
*
* MIT License (MIT), http://opensource.org/licenses/MIT
* Full license can be found in the LICENSE file
*/

#ifndef src_common_h
#define src_common_h

#include "../include/http/common.h"
#include "../include/http/types.h"

HTTP_INLINE
const char*
skipspaces(const char * __restrict buff) {
  while (buff[0] == ' ')
    buff++;
  return buff;
}

HTTP_INLINE
const char*
nextspace(const char * __restrict buff) {
  while (buff[0] != ' ')
    buff++;
  return buff;
}

#endif /* src_common_h */
