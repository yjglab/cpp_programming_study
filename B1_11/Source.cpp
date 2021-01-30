#include <iostream>
#include <cmath>

using namespace std; 

int add(int n1, int n2) {
	return n1 + n2;
}
int main() {

	// *** ��� ������ Arithmetic Operator ***
	int x = 1;
	int y = -x; // -1
	cout << float(2.0f) / 3 << endl; // 0.666667 | float �� ������ �׻� float ����� ���
	
	cout << -5 / 2 << endl; // -2 | C++ 11���� �Ҽ��� �ڸ� ����
	cout << -5 % 2 << endl; // -1 | % ���� ���� ��/������ ���� �������� ��/������ ó��

	// *** ���� ������ increment decrement operator ***
	int i = 5;
	int j = ++x;
	cout << y << endl; // 6

	int n = 6, m = 6;
	cout << n << " " << m << endl; // 6 6
	cout << n++ << " " << m-- << endl; // 6 6
	cout << n << " " << m << endl; // 7 5

	// * do not use �����Ϸ����� ����� �ٸ� �� ����
	int p = 1;
	int q = add(p, ++p); 
	q = q++; 

	cout << q << endl;

	// sizeof() operator
	cout << sizeof(float) << endl; // 4 (32bit)
	float f;
	cout << sizeof f << endl; // 4

	// comma operator
	int c = 3;
	int d = 10;
	int r = (++c, ++d); // ���ʰ��(++c) => �����ʰ��(++d) => �����ʰ��� r�� �Ҵ�
	cout << c << " " << d << " " << r << endl; // 4 11 11 

	int w = 1, u = 10;
	int e;
	e = w, u;
	cout << e << endl; // 1 | comma �����ڴ� = �����ں��� �ļ���.
	e = (w, u);
	cout << e << endl; // 10

	// ���Ǻ� ������ conditional operator ( == arithmetric if)
	bool onSale = true;
	const int price = (onSale) ? 20 : 30;
	cout << price << endl; // 20
	
	// ������ ��� �� ������ ���� ��� ��������� �����ϱ�
	cout << ((5 % 2 == 0) ? "even" : "odd");

	return 0;
}