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

	// XOR operator(C++���� �������� �ʴ� ������(bitwise ������ ^�δ� ����)
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
	

	// *** 2���� Binary Numbers ***
	// 10 : 2^1*1 + 2^0*0
	// 11 + 1 = 100

	// * 10���� -> 2����
	// 148
	// 148 % 2 = 0
	// 74  % 2 = 0
	// 37  % 2 = 1
	// 18  % 2 = 0
	// 9   % 2 = 1
	// 4   % 2 = 0
	// 2   % 2 = 0
	// 1   % 2 = 1
	// == 1001'0100
	
	// * 2���� ���
	/*  0110
		0111
		____
		1101  */

	// * ���� 10���� -> (��ȣ�� �ִ�)2����
	// -5 
	// get 5�� 2����: 0000'0101 (�� �� ���� ��ȣ (+))
	// ������ ���� + 1
	// 1111'1010 + 1 = 1111'1011 (�� �� ���� ��ȣ (-))
	
	// * (��ȣ�� �ִ�)2���� -> 
	// 1001'1110 (��ȣ�� -)
	// ������ ���� + 1
	// 0110'0001 + 1 = 0110'0010 = 98
	// -��ȣ�� �־��� 2���� �����Ƿ� = -98

	// * signed vs unsigned
	// 1001'1110
	// unsinged int�� ��� : 2^7*1 + 2^4*1 + 2^3*1 + 2^2*1 + 2^1*1  = 128+16+8+4+2
	// signed int�� ��� : �� �� ���� ��ȣ�� ó���Ǿ� ������ ����


	return 0;
}