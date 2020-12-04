#include <iostream>
extern "C"
{
    #include "lua.h"
    #include "lualib.h"
    #include "lauxlib.h"
}
int main()
{
    lua_State* Lua = luaL_newstate();
    luaL_openlibs(Lua);

    luaL_loadfile(Lua, "test.lua");
    lua_pcall(Lua, 0, 0, 0);

    lua_close(Lua);

    system("pause");
}
