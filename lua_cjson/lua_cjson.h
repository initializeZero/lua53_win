#ifndef __LUA_CJSON_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <lua.h>

LUA_API int luaopen_cjson(lua_State *l);

LUA_API int luaopen_cjson_safe(lua_State *l);

#ifdef __cplusplus
}
#endif
#endif // !__LUA_CJSON_H__
