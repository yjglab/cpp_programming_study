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
	
	// 정적 바인딩이 아닌 virtual func pointer로 Base의 virtual Table을 찾아서 동적 바인딩임
	Base b1;
	b1.func1(); 
	Derived d1;
	d1.func2(); // Derived의 vptr이 func2가 Derived의 virtual Table에 없으므로 부모인 Base의 func2를 가리킴
	return 0;
}