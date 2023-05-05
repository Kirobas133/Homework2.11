#pragma once
#include "ParallelogramHeader.h"
#ifdef Homework2114Lib_EXPORTS
#define Homework_2114Lib_API __declspec(dllexport)
#else
#define Homework_2114Lib_API __declspec(dllimport)
#endif

class Rhombus :public Parallelogram {
public:
	Homework_2114Lib_API Rhombus(int, int, int);
};
