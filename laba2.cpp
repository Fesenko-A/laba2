/* Copyright(C) 2022, Anton Fesenko
202-TH, №23, завдання 4

Створити клас Money для роботи із грошовими сумами. Число повинне бути
презентовано двома полями: типу long для гривень і типу unsigned char — для
копійок. Дробова частина (копійки) при виводі на екран повинна бути
відділена від цілої частини коми. Реалізувати додавання, віднімання, ділення
сум, ділення суми на дробове число, множення на дробове число й операції порівняння.*/

#include "Money.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Money test;
    test = test.Read();
    test.toString();
    test.Display();
}

