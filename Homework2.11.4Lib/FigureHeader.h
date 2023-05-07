#pragma once
#include <string>
#ifdef HOMEWORK2114LIB_EXPORTS
#define Homework_2114Lib_API __declspec(dllexport)
#else
#define Homework_2114Lib_API __declspec(dllimport)
#endif

class Figure {
protected:
    int sides_count;
    int A, B, C, D;
    int a, b, c, d;
    std::string name;
    Figure(int, int, int, int, int, int, int, int);
public:
    Homework_2114Lib_API Figure();
    Homework_2114Lib_API int get_sides_count();
    Homework_2114Lib_API void print_fig();
};