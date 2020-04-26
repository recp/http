/*
* Copyright (c), Recep Aslantas.
*
* MIT License (MIT), http://opensource.org/licenses/MIT
* Full license can be found in the LICENSE file
*/

#ifndef http_req_h
#define http_req_h

#include "common.h"
#include "types.h"

typedef struct http_req {
  const char   *data;
  const char   *url;
  size_t        dataLen;
  uint32_t      urlLen;
  int           fd;
  http_method_t method:8;
} http_req;

http_req*
http_req_parse(const char * __restrict buff, size_t len);

#endif /* http_req_h */
