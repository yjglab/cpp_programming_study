#include <iostream>

using namespace std;
// *** 유도된 클래스 들의 생성 순서 ***

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
	C c; // 실행 순서 : A -> B -> C
	
	return 0;
}