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
	return 0;
}