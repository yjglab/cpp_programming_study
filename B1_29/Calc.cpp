#include "Calc.h"
// 마우스 오른쪽 - Quick Actions and Refactoring - Move Definition Location

using namespace std;

Calc& Calc::add(int value) { 
	_value += value;
	return *this;
}

Calc& Calc::sub(int value) { 
	_value -= value;
	return *this;
}

Calc& Calc::mul(int value) {
	_value *= value;
	return *this;
}

Calc& Calc::div(int value) {
	_value /= value;
	return *this;
}

void Calc::print() {
	
	cout << _value << endl;
}
