/*
* Copyright (c), Recep Aslantas.
*
* MIT License (MIT), http://opensource.org/licenses/MIT
* Full license can be found in the LICENSE file
*/

#ifndef http_types_h
#define http_types_h

typedef enum __attribute__((__packed__)) http_method_t {
  HTTP_METHOD_OPTIONS = 1,
  HTTP_METHOD_GET     = 2,
  HTTP_METHOD_HEAD    = 3,
  HTTP_METHOD_POST    = 4,
  HTTP_METHOD_PUT     = 5,
  HTTP_METHOD_DELETE  = 6,
  HTTP_METHOD_TRACE   = 7,
  HTTP_METHOD_CONNECT = 8
} http_method_t;

#endif /* http_types_h */
