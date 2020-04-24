/*
  +----------------------------------------------------------------------+
  | Yet Another Framework                                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Xinchen Hui  <laruence@php.net>                              |
  +----------------------------------------------------------------------+
*/

#ifndef YAF_ROUTER_H
#define YAF_ROUTER_H

#define YAF_ROUTER_DEFAULT_ACTION	 	"index"
#define YAF_ROUTER_DEFAULT_CONTROLLER  	"Index"
#define YAF_ROUTER_DEFAULT_MODULE	  	"Index"
#define YAF_DEFAULT_EXT 		 	   	"php"

#define YAF_ROUTER_PROPERTY_NAME_ROUTES 		"_routes"
#define YAF_ROUTER_PROPERTY_NAME_CURRENT_ROUTE	"_current"

#define YAF_ROUTER_URL_DELIMIETER 	 '/'
#define YAF_ROUTE_REGEX_DILIMITER  	 '#'

extern zend_class_entry *yaf_router_ce;

yaf_router_t *yaf_router_instance(yaf_router_t *this_ptr);
void yaf_router_parse_parameters(const char *str, size_t len, zval *params);
int yaf_router_route(yaf_router_t *router, yaf_request_t *request);

YAF_STARTUP_FUNCTION(router);

#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
