#pragma once
#include "ParallelogramHeader.h"
#ifdef Homework2114Lib_EXPORTS
#define Homework_2114Lib_API __declspec(dllexport)
#else
#define Homework_2114Lib_API __declspec(dllimport)
#endif

class Rectangle :public Parallelogram {
public:
	Homework_2114Lib_API Rectangle(int, int);
};