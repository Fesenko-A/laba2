#pragma once
#include <string>
class Money {
	long hrn;	//	�����
	unsigned short kop;	//	������
	double num;	//	�����, �� ��� �������, ������ �� ���� �� ��.
public:
	Money Init(int h, unsigned short k, double n);
	Money Read();
	void Display();
	std::string toString();	//	������������ �� �����
};
