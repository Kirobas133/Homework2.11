#pragma once
#include "TriangleHeader.h"
#ifdef Homework2114Lib_EXPORTS
#define Homework_2114Lib_API __declspec(dllexport)
#else
#define Homework_2114Lib_API __declspec(dllimport)
#endif

class Triangle2SideEqual :public Triangle {
public:
	Homework_2114Lib_API Triangle2SideEqual(int, int, int, int);
};