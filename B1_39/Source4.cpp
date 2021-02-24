#include <iostream>
using namespace std;

// *** 유도된 클래스에 새 기능 추가하기 ***
class Base1 {
protected:
	int _value;

public:
	Base1(int value)
		:_value(value)
	{
		
	}
};

class Derived1 : public Base1 {
public:
	Derived1(int value)
		:Base1(value)
	{
		
	}
	void setValue(int value) {
		Base1::_value = value;
	}
};


int main6() {

	return 0;
}