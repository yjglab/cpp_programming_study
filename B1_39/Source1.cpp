#include <iostream>

using namespace std;
// *** ������ Ŭ���� ���� ���� ���� ***

class A {
public:
	A()
	{
		cout << "A Construction" << endl;
	}
};

class B : public A {
public:
	B()
	{
		cout << "B Construction" << endl;
	}
};
class C : public B {
public:
	C()
	{
		cout << "C Construction" << endl;
	}
};
int main3() {
	C c; // ���� ���� : A -> B -> C
	
	return 0;
}