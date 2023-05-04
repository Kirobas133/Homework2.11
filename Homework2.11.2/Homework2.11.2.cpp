// Homework2.11.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
#include <Windows.h>
#include "Homework2.11.2Lib.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Leaver L;
    std::string str;
    std::cout << "Введите имя: ";
    std::cin >> str;
    std::cout << L.leave(str) << std::endl;
    system ("Pause");
}