#include <iostream>
#include <bitset> // 2진수로 변환하여 출력해주는
using namespace std;

int main2() {
	
	/*
	*** 비트단위 연산자 bitwise operators ***
	<< : left shift (cin, cout에서 사용하는 것과 의미가 다름)
	>> : right shift
	~  : not
	&  : and
	|  : or
	^  : xor
	*/

	// <<
	unsigned int a = 3;
	cout << std::bitset<4>(a) << endl; // 0011 | a를 4bit 2진수로 표현

	unsigned int b = a << 1;
	cout << std::bitset<4>(b) << endl; // 0110 | a의 각 bit자리를 왼쪽으로 1자리 shift 함 = a*2^1
	cout << b << endl; // 6
	b = a << 2;
	cout << std::bitset<4>(b) << endl; // 1100 | a의 각 bit자리를 왼쪽으로 2자리 shift 함 = a*2^2
	cout << b << endl; // 12

	cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl; // 00000110 6
	cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl; // 00001100 12
	cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl; // 00011000 24
	cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl; // 00110000 48
	
	// >>
	a = 1024;
	cout << std::bitset<16>(a) << endl; // 0000010000000000
	cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl; // 0000001000000000 512
	cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl; // 0000000100000000 256
	cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl; // 0000000010000000 128
	cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl; // 0000000001000000 64

	// ~
	cout << std::bitset<16>(a) << endl; // 0000010000000000
	cout << std::bitset<16>(~a) << " " << (~a) << endl; // 1111101111111111 4294966271

	// & : 왼쪽 값과 오른쪽 값의 각 자리를 비교해 모두 1이면 1, 그렇지 않으면 0
	a = 0b1100;
	b = 0b0110;
	cout << a << " " << b << endl; // 12 6
	cout << std::bitset<4>(a & b) << endl; // 0100
	// | : 왼쪽 값과 오른쪽 값의 각 자리를 비교해 둘중 하나가 1이거나 둘다 1이면 1, 그 외에는 0
	cout << std::bitset<4>(a | b) << endl; // 1110
	// ^ : 왼쪽 값과 오른쪽 값의 각 자리를 비교해 둘중 하나가 1이면 1, 둘다 1이면 0, 그 외에는 0
	cout << std::bitset<4>(a ^ b) << endl; // 1010

	// = 와 결합된 형태 가능
	cout << std::bitset<4>(a &= b) << endl; // 0100
	

	//
	unsigned int c = 0b0110;
	cout << std::bitset<4>(c >> 2) << endl; // 0001
	
	return 0;
}