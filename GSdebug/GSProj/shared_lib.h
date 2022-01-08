#ifndef SHARED_LIB_H
#define SHARED_LIB_H

// Add all of the below in gsheaders.h???
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <array>

using namespace std;

#ifdef BUILD_MY_DLL
    #define SHARED_LIB __declspec(dllexport)
#else
    #define SHARED_LIB __declspec{(dllimport)
#endif

namespace My_Exports{
extern "C" class MyClasses{
void StrCat(const char *str1, const char *str2, char *newstr);
void StrCpy(char *str1, char *str2);
int add(int a, int b);
void pipecommand(const char *strCmd);
void SaySomething(const char *str);
};
}

#endif
