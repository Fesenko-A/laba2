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
	cout << "���: ";
	cin >> tmp.hrn;
	cout << "���: ";
	cin >> tmp.kop;
	cout << "�����: ";
	cin >> tmp.num;
	if (tmp.kop >= 100)
		cout << "������� - ������ �� ���� ���� ����� 99" << endl;
	else 
		return tmp;
}

string Money::toString()
{
	string res(to_string(hrn) + "." + to_string(kop));	//	�'������ ����� � ��������
	return res;
}

void Money::Display()
{
	cout << "\n�������: " << toString() << " ���." << endl;
	double s = stod(toString());	//	������������ ����� � �������� ��� double
	double sum = s + num;
	double minus = s - num;
	double mn = s * num;
	bool equal = s == num;	//	�������� ���������
	cout << endl;
	if (num != 0) {	//	�������� ������ �� 0
		double dil = s / num;
		cout << "ĳ�����: " << dil << endl;
	}
	else cout << "ĳ����� �� 0 ���������!";

	cout << "����: " << sum << endl;
	cout << "г�����: " << minus << endl;
	cout << "��������: " << mn << endl;
	cout << "���������: ";
	if (equal == 1) cout << s << " = " << num << endl;	//	��������� ���� �����
	else cout << s << " != " << num << endl;
}