#ifndef _LPEG_H_
#define _LPEG_H_

#include <lua.h>

#if defined(_WIN32) && defined(_MSC_VER)

#define LPEG_API __declspec(dllexport)

#else

#define LPEG_API extern

#endif

LPEG_API int luaopen_lpeg(lua_State *L);

#endif // !_LPEG_H_
