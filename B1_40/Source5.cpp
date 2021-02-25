#include <iostream>

using namespace std;
// *** ���� ��ȯ�� covariant ***

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
	ref_A1.getThis()->print(); // A1 | B1�� getThis()�� �����Ͽ� B1�� �����͸� return ������ A1�� �����ͷ� ���������� �����Ͽ� A1�� print()�� ȣ����

	cout << typeid(b1.getThis()).name() << endl; // class B1 *
	cout << typeid(ref_A1.getThis()).name() << endl; // class A1 *
	return 0;
}