#include <cstdio>
#include <Windows.h>

static void *sys_load(const char *path) {
	// HMODULE lib = LoadLibraryExA(path, NULL, 0);
	HMODULE lib = LoadLibraryExA(path, NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
	return lib;
}


static FARPROC sys_sym(void *lib, const char *sym) {
	FARPROC f = GetProcAddress((HMODULE)lib, sym);
	return f;
}

int main(int argc, char* argv[]) {

	void* lib = sys_load("D:\\Documents\\Visual Studio 2015\\Projects\\lua_proj\\Debug\\zlib.dll");
	if (lib == nullptr) {
		printf("can't load lib, GetLastError=%d\n", GetLastError());
		return 0;
	}
	FARPROC f = sys_sym(lib, "luaopen_zlib");
	if (f == nullptr) {
		printf("can't find func, GetLastError=%d\n", GetLastError());
		return 0;
	}
	return 0;

}