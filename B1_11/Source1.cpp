#include <iostream>

int main() {
	using namespace std;

	// *** �� ������ logical operator ***
	bool x = true;
	cout << !x << endl; // 0
	bool x1 = true;
	bool x2 = false;
	cout << (x1 && x2) << endl; // 0
	cout << (x1 || x2) << endl; // 1

	// short circuit evaluation
	int y1 = 1;
	int y2 = 2;
	if (y1 == 1 && y2++ == 2) {

	}
	cout << y2 << endl; // 3
	y1 = 2;
	if (y1 == 1 && y2++ == 2) {
		// && : ���� ������ false �� ��� ������ ������ �������� ����
	}
	cout << y2 << endl; // 3

	// De Morgan's Law
	bool b1 = true;
	bool b2 = false;
	!(b1 && b2); // �й��Ģ��
	!b1 && !b2; // ������� ���� => �� ������ !b1 || !b2 �� ��ȯ��
	!(b1 || b2); // �й��Ģ��
	!b1 || !b2; // ������� ���� => �� ������ !b1 && !b2 �� ��ȯ��

	// XOR operator(C++���� �������� �ʴ� ������)
	// false false -> false
	// true false  -> true
	// false true  -> true
	// true true   -> false *
	
	cout << (true != true) << endl; // 0
	cout << (true != false) << endl; // 1
	cout << (false != true) << endl; // 1
	cout << (false != false) << endl; // 0

	//
	cout << ((true && true) || false) << endl; // 1
	cout << ((false && true) || true) << endl; // 1
	cout << ((false && true) || false || true) << endl; // 1
	cout << ((14 > 13 || 2 > 1) && (9 > 1)) << endl; // 1
	cout << (!(2314123 > 2 || 123123 > 2387)) << endl; // 0

	// logical && �� logical || ���� �켱������ ����
	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool m1 = v1 || v2 && v3; // v2 && v3 �� ���� ����
	bool m2 = (v1 || v2) && v3;
	bool m3 = v1 || (v2 && v3);

	cout << m1 << endl; // 1
	cout << m2 << endl; // 0
	cout << m3 << endl; // 1

	return 0;
}