#include "Money.h"
#include <iostream>
#include <string>
using namespace std;

Money Money::Init(int h, unsigned short k, double n)
{
	Money tmp;
	tmp.hrn = h;
	tmp.kop = k;
	tmp.num = n;
	return tmp;
}

Money Money::Read()
{
	Money tmp;
	cout << "Грн: ";
	cin >> tmp.hrn;
	cout << "Коп: ";
	cin >> tmp.kop;
	cout << "Число: ";
	cin >> tmp.num;
	if (tmp.kop >= 100)
		cout << "Помилка - копійок не може бути більше 99" << endl;
	else 
		return tmp;
}

string Money::toString()
{
	string res(to_string(hrn) + "." + to_string(kop));	//	З'єднуємо гривні з копійками
	return res;
}

void Money::Display()
{
	cout << "\nВведено: " << toString() << " грн." << endl;
	double s = stod(toString());	//	Перетворюємо рядок у числовий тип double
	double sum = s + num;
	double minus = s - num;
	double mn = s * num;
	bool equal = s == num;	//	Операція порівняння
	cout << endl;
	if (num != 0) {	//	Перерівка ділення на 0
		double dil = s / num;
		cout << "Ділення: " << dil << endl;
	}
	else cout << "Ділення на 0 неможливе!";

	cout << "Сума: " << sum << endl;
	cout << "Різниця: " << minus << endl;
	cout << "Множення: " << mn << endl;
	cout << "Порівняння: ";
	if (equal == 1) cout << s << " = " << num << endl;	//	Порівняння двох чисел
	else cout << s << " != " << num << endl;
}