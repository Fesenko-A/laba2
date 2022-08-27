#pragma once
#include <string>
class Money {
	long hrn;	//	Гривні
	unsigned short kop;	//	Копійки
	double num;	//	Число, на яке множимо, додаємо до суми та ін.
public:
	Money Init(int h, unsigned short k, double n);
	Money Read();
	void Display();
	std::string toString();	//	Перетворення на рядок
};
