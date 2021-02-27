#include <iostream>
using namespace std;

// *** ���� �Լ� virtual�� ������ ***
class A {
public:
	void print() {
		cout << "A" << endl;
	}
};

class B : public A {
public:
	virtual void print() { // virtual : B�� ��ӹ��� �ν��Ͻ�(C)�� B�� �Լ��� �������̵� �Ǵ� ��� C�� �Լ��� ����� �� �ְ���
		cout << "B" << endl;
	}
};

class C : public B {
public:
	void print() {
		cout << "C" << endl;
	}
};

class D : public C {
public:
	void print() {
		cout << "D" << endl; // �ֻ��� Ŭ���� A�� ���Ŀ� ���� D�� print() �Լ��� return type���� ������ �ٲ� �� ����
	}
};

int main5() {
	A a;
	B b;
	C c;
	D d;

	//
	A& ref_A = b;
	B& ref_B = c;
	B& ref_B2 = d;
	ref_A.print(); // A
	ref_B.print(); // C | B�� �Լ��� virtual�̹Ƿ� C�� �Լ��� �������̵� �Ǿ���
	ref_B2.print(); // D | ���� ���� ����
	C& ref_C = d;
	ref_C.print(); // D | ����� Ÿ�� �ö� ���� Ŭ������ �Լ��� virtual�� ���, �� �Լ��� ��ӹ޴� ��� Ŭ������ ���� �Լ��鵵 virtual�� �ȴ�
	
	/* ���� ȣ���� �䱸�Ǵ� ���� ����, �ǽð� ê, ���� ���� ���� ���α׷��ֿ���
	virtual�� ����� ������� ���� */

	return 0;
}