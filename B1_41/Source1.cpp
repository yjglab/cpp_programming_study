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
	
	// ���� ���ε��� �ƴ� virtual func pointer�� Base�� virtual Table�� ã�Ƽ� ���� ���ε���
	Base b1;
	b1.func1(); 
	Derived d1;
	d1.func2(); // Derived�� vptr�� func2�� Derived�� virtual Table�� �����Ƿ� �θ��� Base�� func2�� ����Ŵ
	return 0;
}