#include <iostream>
#include <cmath>
#include <limits> 

int main() {
	using namespace std;

	// *** 정수형(singed int, unsigned int) *** 
	// int i = 1;
	// 00000000 00000000 00000000 00000001 | 맨 앞 1bit는 부호에 사용

	short s = 1; 
	int i = 1;
	long l = 1;
	long long ll = 1;

	// (singed) int : 음의 정수, 0, 양의 정수 표현 | 맨 앞 1bit를 부호 입력에 사용. | singed는 생략 가능
	// unsinged int : 양의 정수, 0 표현
	
	cout << sizeof(short) << endl; // 2 bytes = 2 * 8 bits = 16 bits
	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl; // 32767 | 2^15 - 1(부호) - 1(0) | singed short로 표현할 수 있는 가장 큰 수
	cout << std::numeric_limits<short>::max() << endl; // 32767
	cout << std::numeric_limits<short>::min() << endl; // -32768
	cout << std::numeric_limits<short>::lowest() << endl; // -32768
	cout << std::numeric_limits<unsigned int>::lowest() << endl; // 0
	cout << std::numeric_limits<signed int>::max() << endl; // 2147483647
	cout << std::numeric_limits<unsigned int>::max() << endl; // 4294967295
	cout << std::numeric_limits<long>::max() << endl; // 2147483647
	cout << std::numeric_limits<long long>::max() << endl; // 9223372036854775807

	s = 32767;
	s += 1; 
	cout << s << endl; // -32768 | overflow
	s -= 1; 
	cout << s << endl; // 32767 | overflow
	cout << sizeof(int) << endl; // 4
	cout << sizeof(long) << endl; // 4
	cout << sizeof(long long) << endl; // 8

	unsigned int p = -1;
	cout << p << endl; // 4294967295 | overflow
	return 0;
}