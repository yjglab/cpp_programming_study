#include <iostream>
using namespace std;

class Base {
public:
	// FuncPointer *_vptr;
	virtual void func1() {};
	virtual void func2() {};
};

class Derived : public Base {
public:
	// FuncPointer *_vptr;
	virtual void func1() {};
	virtual void func3() {};
};

int main3() {
	cout << sizeof(Base) << endl; // 4
	cout << sizeof(Derived) << endl; // 4
	
	return 0;
}