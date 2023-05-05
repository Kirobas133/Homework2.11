#pragma once
#include "RectangleHeader.h"
#ifdef Homework2114Lib_EXPORTS
#define Homework_2114Lib_API __declspec(dllexport)
#else
#define Homework_2114Lib_API __declspec(dllimport)
#endif

class Square :public Rectangle {
public:
	Homework_2114Lib_API Square(int);
};