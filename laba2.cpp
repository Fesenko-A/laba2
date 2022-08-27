// Copyright (C) 2022, Anton Fesenko
// 202-TH, number 23

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

