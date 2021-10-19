#ifdef __linux__ 
    #include <unistd.h>
    #define CLEAR "clear"
    #define sleep sleep
#elif _WIN32
    #include <windows.h>
    #define CLEAR "cls"
    #define sleep Sleep
#else
    #error "OS not supported!"
#endif

#include <bits/stdc++.h>

#include "docente.hpp"
#include "discente.hpp"
#include "endereco.hpp"
#include "menu.hpp"
#include "pessoa.hpp"