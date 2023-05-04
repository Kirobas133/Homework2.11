// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "Homework2.11.3Lib.h"

std::string Leaver::leave(std::string str) {
	std::string strrtr = "До свидания, " + str + "!\n";
	return strrtr;
}