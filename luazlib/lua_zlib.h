//
// Created by initialize on 2019/8/24.
//

#ifndef _LUA_ZLIB_H
#define _LUA_ZLIB_H

#include <lua.h>
#if defined(_WIN32) && defined(_MSC_VER)

#define LZLIB_API __declspec(dllexport)

#else

#define LPEG_API extern

#endif
LZLIB_API int luaopen_zlib(lua_State * const L);

#endif //_LUA_ZLIB_H
