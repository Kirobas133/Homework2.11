#pragma once
#include "FigureHeader.h"

class Triangle :public Figure {
public:
	Homework_2114Lib_API Triangle(int, int, int, int, int, int);
	Homework_2114Lib_API int get_sides_count();
};