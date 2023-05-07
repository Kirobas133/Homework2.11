#pragma once
#include <string>
#ifdef HOMEWORK2115LIB_EXPORTS
#define Homework_2115Lib_API __declspec(dllexport)
#else
#define Homework_2115Lib_API __declspec(dllimport)
#endif

class Figure {
protected:
    int sides_count;
    int A, B, C, D;
    int a, b, c, d;
    std::string name;
    Figure(int, int, int, int, int, int, int, int);
public:
    Homework_2115Lib_API Figure();
    Homework_2115Lib_API int get_sides_count();
    Homework_2115Lib_API void print_fig();
};