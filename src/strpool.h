/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef http_strpool_h
#  define http_strpool_h

#ifndef _http_STRPOOL_
#  define _AK_EXTERN extern
#else
#  define _AK_EXTERN
#endif

_AK_EXTERN const char _s_http_pool_0[];

#define _s_http_0(x) (_s_http_pool_0 + x)

/* _s_http_pool_0 */
#define _s_http_GET _s_http_0(0)
#define _s_http_GET_LEN 4
#define _s_http_POST _s_http_0(5)
#define _s_http_POST_LEN 4

#endif /* http_strpool_h */
