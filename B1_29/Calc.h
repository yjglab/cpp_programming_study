#pragma once

#include <iostream>

class Calc {
private:
	int _value;
public:
	Calc(int init_value)
		:_value(init_value)
	{

	}
	Calc& add(int value);
	Calc& sub(int value);
	Calc& mul(int value);
	Calc& div(int value);

	void print();
};

/* 
Calc& Calc::add(int value) { // Calc�Ӽ��� ����Լ����� ǥ��
	_value += value;
	return *this;
}
*/

// header file���� using namespace������ �������� ���� ���� ��������
