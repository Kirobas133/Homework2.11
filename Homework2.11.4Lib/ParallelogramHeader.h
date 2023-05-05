#pragma once
#include "QuadrilateralHeader.h"
#ifdef Homework2114Lib_EXPORTS
#define Homework_2114Lib_API __declspec(dllexport)
#else
#define Homework_2114Lib_API __declspec(dllimport)
#endif

class Parallelogram :public Quadrilateral {
public:
	Homework_2114Lib_API Parallelogram(int, int, int, int);
};
