#pragma once
#include "FigureHeader.h"
#ifdef Homework2114Lib_EXPORTS
#define Homework_2114Lib_API __declspec(dllexport)
#else
#define Homework_2114Lib_API __declspec(dllimport)
#endif

class Quadrilateral :public Figure {
public:
	Homework_2114Lib_API Quadrilateral(int, int, int, int, int, int, int, int);
};