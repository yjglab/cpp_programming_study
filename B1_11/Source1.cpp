#include <iostream>

int main() {
	using namespace std;

	// *** 논리 연산자 logical operator ***
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
		// && : 왼쪽 조건이 false 일 경우 오른쪽 조건을 실행하지 않음
	}
	cout << y2 << endl; // 3

	// De Morgan's Law
	bool b1 = true;
	bool b2 = false;
	!(b1 && b2); // 분배법칙이
	!b1 && !b2; // 적용되지 않음 => 이 문장은 !b1 || !b2 로 변환됨
	!(b1 || b2); // 분배법칙이
	!b1 || !b2; // 적용되지 않음 => 이 문장은 !b1 && !b2 로 변환됨

	// XOR operator(C++에는 존재하지 않는 연산자(bitwise 연산자 ^로는 존재)
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

	// logical && 는 logical || 보다 우선순위가 높음
	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool m1 = v1 || v2 && v3; // v2 && v3 를 먼저 실행
	bool m2 = (v1 || v2) && v3;
	bool m3 = v1 || (v2 && v3);

	cout << m1 << endl; // 1
	cout << m2 << endl; // 0
	cout << m3 << endl; // 1
	

	// *** 2진수 Binary Numbers ***
	// 10 : 2^1*1 + 2^0*0
	// 11 + 1 = 100

	// * 10진수 -> 2진수
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
	
	// * 2진수 계산
	/*  0110
		0111
		____
		1101  */

	// * 음의 10진수 -> (부호가 있는)2진수
	// -5 
	// get 5의 2진수: 0000'0101 (맨 앞 값은 부호 (+))
	// 보수로 변경 + 1
	// 1111'1010 + 1 = 1111'1011 (맨 앞 값은 부호 (-))
	
	// * (부호가 있는)2진수 -> 
	// 1001'1110 (부호가 -)
	// 보수로 변경 + 1
	// 0110'0001 + 1 = 0110'0010 = 98
	// -부호가 있었던 2진수 였으므로 = -98

	// * signed vs unsigned
	// 1001'1110
	// unsinged int인 경우 : 2^7*1 + 2^4*1 + 2^3*1 + 2^2*1 + 2^1*1  = 128+16+8+4+2
	// signed int인 경우 : 맨 앞 값은 부호로 처리되어 계산되지 않음


	return 0;
}