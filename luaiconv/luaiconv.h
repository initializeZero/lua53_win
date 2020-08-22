#ifndef _LUAICONV_H
#define _LUAICONV_H

#include <lua.h>
#if defined(_WIN32) && defined(_MSC_VER)

#define DLL_VARIABLE __declspec(dllexport)
#pragma comment(lib,"libiconv.lib")
#else
#define DLL_VARIABLE __attribute__((__visibility__("default")))
#endif
DLL_VARIABLE int luaopen_iconv(lua_State *L);
#endif //_LUAICONV_H

/*
"utf8" can't be recognized by libiconv!
please use "utf-8"
*/