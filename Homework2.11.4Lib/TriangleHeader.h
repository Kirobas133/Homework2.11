#pragma once
#include "FigureHeader.h"
#ifdef Homework2114Lib_EXPORTS
#define Homework_2114Lib_API __declspec(dllexport)
#else
#define Homework_2114Lib_API __declspec(dllimport)
#endif

class Triangle :public Figure {
public:
	Homework_2114Lib_API Triangle(int, int, int, int, int, int);
	Homework_2114Lib_API int get_sides_count();
};