#include <iostream>

int main24() {
	using namespace std;

	// *** ���ͷ� ��� literal constants ***

	float pi = 3.14f;
	unsigned int i = 1234u; // unsigned int | �̿ܿ��� �پ��ϰ� ����. ��Ȯ�ϰ� ��Ÿ���� ���� ��. | (unsinged int)1234
	long l = 5L;
	double d = 6.0e-10;

	// n����
	// Decimal : 0  1  2  3  4  5  6  7  8  9  10 ...
	// Octal   : 0  1  2  3  4  5  6  7  10 11 12 13 ... 
	// Hexa    ; 0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F  10 ...

	int n8 = 012;
	cout << n8 << endl; // 10
	int n16 = 0xF;
	cout << n16 << endl; // 15
	int n2 = 0b1010; 
	cout << n2 << endl; // 15
	int n2l = 0b1011'1111'1010; // c++ 14���� '�� ���� | 2���� �� �ٸ� ���������� ���
	cout << n2l << endl; // 3066

	//
	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * price_per_item; // magic number�� ����� �������� ����. ����ζ� ǥ���ϱ�.

	return 0;
}