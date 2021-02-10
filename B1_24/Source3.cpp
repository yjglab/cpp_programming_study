#include <iostream>
using namespace std;

inline int min(int x, int y) { // *** �ζ��� �Լ� ***
// ��� ������ �Լ��� �����Ҷ� ���� ���
	return x > y ? y : x;
}

int add(int x, int y) {
	return x + y;
}

double add(double x, double y) {
	return x + y;
}

typedef int my_int;
void print(int x) {}
// void print(my_int x) {} ���� ������ �Լ�

void pnt(char* value) {}
void pnt(const char* value) {
	cout <<  value << endl; // a
}
void pnt(int value) {}

//
void pnt2(unsigned int value) {}
void pnt2(float value) {}

int main5() {

	cout << min(5, 6) << endl;
	
	// �Լ� �����ε� : �־��� ���ڿ� �´� �ڷ����� �޴� �Լ��� ã�� ����
	add(1, 2); 
	add(3.0, 4.0); 

	//
	pnt(0); // ����° pnt�� �����ε�
	pnt('a'); // ����° pnt�� �����ε� (int��)
	pnt("a"); // �ι�° pnt�� �����ε�

	/*
	pnt2('a'); // ambiguous call to overloaded function
	pnt2(0); // ambiguous call to overloaded function
	pnt2(3.141592); // ambiguous call to overloaded function
	*/
	pnt2((unsigned int)'a');
	pnt2(3.141592f);
	pnt2(0u);

	return 0;
}