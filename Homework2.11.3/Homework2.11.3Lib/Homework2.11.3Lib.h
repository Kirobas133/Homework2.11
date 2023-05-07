// header.h: включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта
//

#pragma once

#ifdef HOMEWORK2113LIB_EXPORTS
#define Homework_2113Lib_API __declspec(dllexport)
#else
#define Homework_2113Lib_API __declspec(dllimport)
#endif

#include<iostream>

class Leaver {
public:
	Homework_2113Lib_API std::string leave(std::string str);
};