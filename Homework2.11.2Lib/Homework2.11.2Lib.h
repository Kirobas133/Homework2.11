// header.h: включаемый файл для стандартных системных включаемых файлов
// или включаемые файлы для конкретного проекта
//

#pragma once

#ifdef Homework2112Lib_EXPORTS
#define Homework_2112Lib_API __declspec(dllexport)
#else
#define Homework_2112Lib_API __declspec(dllimport)
#endif

#include <windows.h>
#include <iostream>

class Leaver {
public:
	Homework_2112Lib_API std::string leave(std::string str);
};