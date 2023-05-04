// Homework2.11.1.Lib.cpp : Определяет функции для статической библиотеки.
//

#include "Homework2.11.1.Lib.h"
#include <iostream>

std::string Greeter::greet(std::string str){
		std::string strrtr = "Здравствуйте, " + str + "!";
		return strrtr;
}