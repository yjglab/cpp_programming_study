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
Calc& Calc::add(int value) { // Calc속성의 멤버함수임을 표시
	_value += value;
	return *this;
}
*/

// header file에서 using namespace구문을 전역으로 쓰는 것은 좋지않음
