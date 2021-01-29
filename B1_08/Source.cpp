#include <iostream>
#include <cmath>
#include <limits> // 컴파일러에 물어보는

int main() {
	using namespace std;

	// *** 정수형(singed int, unsigned int) *** 
	// int i = 1;
	// 00000000 00000000 00000000 00000001 | 맨앞 1bit는 부호에 사용

	short s = 1; 
	int i = 1;
	long l = 1;
	long long ll = 1;

	// singed 자료형(+,-로 표현하는 자료형)은 맨 앞 1bit를 부호 입력에 사용.
	cout << sizeof(short) << endl; // 2 bytes = 2 * 8 bits = 16 bits
	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl; // 32767 | 2^15 - 1(부호) - 1(0) | singed short로 표현할 수 있는 가장 큰 수
	cout << std::numeric_limits<short>::max() << endl; // 32767
	cout << std::numeric_limits<short>::min() << endl; // -32768
	cout << std::numeric_limits<short>::lowest() << endl; // -32768

	s = 32767;
	s += 1; // 32768
	cout << s << endl; // -32768 | overflow
	s -= 1; // 32767
	cout << s << endl; // -32768 | overflow
	cout << sizeof(int) << endl; // 4
	cout << sizeof(long) << endl; // 4
	cout << sizeof(long long) << endl; // 8

	unsigned int p = -1;
	cout << p << endl; // 4294967295 | overflow
	return 0;
}