#include <iostream>

int main24() {
	using namespace std;

	// *** 리터럴 상수 literal constants ***

	float pi = 3.14f;
	unsigned int i = 1234u; // unsigned int | 이외에도 다양하게 있음. 명확하게 나타내고 싶을 때. | (unsinged int)1234
	long l = 5L;
	double d = 6.0e-10;

	// n진수
	// Decimal : 0  1  2  3  4  5  6  7  8  9  10 ...
	// Octal   : 0  1  2  3  4  5  6  7  10 11 12 13 ... 
	// Hexa    ; 0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F  10 ...

	int n8 = 012;
	cout << n8 << endl; // 10
	int n16 = 0xF;
	cout << n16 << endl; // 15
	int n2 = 0b1010; 
	cout << n2 << endl; // 15
	int n2l = 0b1011'1111'1010; // c++ 14이후 '는 무시 | 2진수 외 다른 진수에서도 사용
	cout << n2l << endl; // 3066

	//
	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * price_per_item; // magic number의 사용은 권장하지 않음. 상수로라도 표현하기.

	return 0;
}