#include <iostream>
using namespace std;

// *** ��Ӱ� ���� ������ ***
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
		// Derived::_public; ���� �Ұ��� (private Base)
	}
};
int main5() {

	Derived d1;
	// d1._public = 1024; ���� �Ұ���

	return 0;
}