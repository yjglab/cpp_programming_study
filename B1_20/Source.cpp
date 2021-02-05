#include <iostream>
#include <typeinfo>

// ���� ������ '����' �޸� ���
// ���� �Ҵ� �޸𸮴� '��' �޸� ���
using namespace std;

// parameter�� �����͸� �޴� �Լ�
int* ptrFunc(int* ptr_a) {
	return 0;
}

struct something {
	int a, b, c, d;
};
int main() {
	// *** pointer ***
	int x = 5;
	cout << &x << endl; // address of operator | ampersand

	// de-reference operator (*)
	/* reference : ������ ���� | de-reference : ������ ���� */
	// *�� &�� �Բ��ִ� => �ּҸ� �����Ͽ� ���� ������ = �� �ǹ̸� ���
	cout << *&x << endl; // 5 | ==x | �� �޸� �ּҿ� ���� �����Ͽ� ���� �˾ƺ� 

	// �����Ͷ� �޸� �ּҸ� ������ ��� '����'
	int* ptr_x; // ������ ���� ���� (���� ���� ������� ����)
	ptr_x = &x; // ������ ���� ptr_x�� x�� �ּ� ���� �ο�

	//
	int* ptr_a = &x, * ptr_b = &x;
	cout << ptr_a << endl; // �ּ�
	cout << *ptr_a << endl; // �ּҿ� ��� ��

	// 
	/* double* ptr_d = 0x004FFDA8; // err */

	//
	double d = 123.0;
	cout << typeid(ptr_x).name() << endl; // int *

	cout << sizeof(x) << endl; // 4
	cout << sizeof(d) << endl; // 8
	cout << sizeof(&x) << " " << sizeof(ptr_x); // 4 4
	cout << sizeof(&d) << " " << sizeof(ptr_x); // 4 4

	//
	cout << endl;
	something st;
	something* ptr_st;
	cout << sizeof(something) << endl; // 16
	cout << sizeof(ptr_st) << endl; // 4
	return 0;
}