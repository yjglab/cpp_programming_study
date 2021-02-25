#include <iostream>

using namespace std;
// *** 공변 반환값 covariant ***

class A1 {
public:
	void print() {
		cout << "A1" << endl;
	}
	virtual A1* getThis() {
		return this;
	}
};

class B1 : public A1 {
public:
	void print() {
		cout << "B1" << endl;
	}
	virtual B1* getThis() {
		return this;
	}
};

class C1 : public B1 {
public:
	void print() {
		cout << "C1" << endl;
	}
	virtual C1* getThis() {
		return this;
	}
};

int main7() {
	A1 a1;
	B1 b1;
	C1 c1;

	A1& ref_A1 = b1;
	b1.getThis()->print(); // B1
	ref_A1.getThis()->print(); // A1 | B1의 getThis()를 실행하여 B1의 포인터를 return 했지만 A1의 포인터로 내부적으로 변경하여 A1의 print()를 호출함

	cout << typeid(b1.getThis()).name() << endl; // class B1 *
	cout << typeid(ref_A1.getThis()).name() << endl; // class A1 *
	return 0;
}