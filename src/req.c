/*
* Copyright (c), Recep Aslantas.
*
* MIT License (MIT), http://opensource.org/licenses/MIT
* Full license can be found in the LICENSE file
*/

#include "common.h"
#include "../include/http/req.h"
#include "strpool.h"

http_req*
http_req_parse(const char * __restrict buff, size_t len) {
  http_req   *req;
  const char *p;
  
  req = malloc(sizeof(*req));
  p   = buff;

  /* Parse Method */
  if (http_memstr(p, GET)) {
    p += _s_http_GET_LEN;
    req->method = HTTP_METHOD_GET;
  } else if (http_memstr(p, POST)) {
    p += _s_http_POST_LEN;
    req->method = HTTP_METHOD_POST;
  }

  return req;
}
