#include <iostream>
using namespace std;

// *** 상속과 접근 지정자 ***
class Base {
public:
	int _public;
protected:
	int _protected;
private:
	int _private;
};

class Derived : private Base {
public:
	Derived()
	{
		Base::_public;
		Base::_protected;
	}
};

class lastDerived : public Derived {
public:
	lastDerived()
	{
		// Derived::_public; 접근 불가능 (private Base)
	}
};
int main5() {

	Derived d1;
	// d1._public = 1024; 접근 불가능

	return 0;
}