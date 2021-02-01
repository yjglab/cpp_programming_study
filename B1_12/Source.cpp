#include <iostream>
#include <bitset> // 2������ ��ȯ�Ͽ� ������ִ�
using namespace std;

int main2() {
	
	/*
	*** ��Ʈ���� ������ bitwise operators ***
	<< : left shift (cin, cout���� ����ϴ� �Ͱ� �ǹ̰� �ٸ�)
	>> : right shift
	~  : not
	&  : and
	|  : or
	^  : xor
	*/

	// <<
	unsigned int a = 3;
	cout << std::bitset<4>(a) << endl; // 0011 | a�� 4bit 2������ ǥ��

	unsigned int b = a << 1;
	cout << std::bitset<4>(b) << endl; // 0110 | a�� �� bit�ڸ��� �������� 1�ڸ� shift �� = a*2^1
	cout << b << endl; // 6
	b = a << 2;
	cout << std::bitset<4>(b) << endl; // 1100 | a�� �� bit�ڸ��� �������� 2�ڸ� shift �� = a*2^2
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

	// & : ���� ���� ������ ���� �� �ڸ��� ���� ��� 1�̸� 1, �׷��� ������ 0
	a = 0b1100;
	b = 0b0110;
	cout << a << " " << b << endl; // 12 6
	cout << std::bitset<4>(a & b) << endl; // 0100
	// | : ���� ���� ������ ���� �� �ڸ��� ���� ���� �ϳ��� 1�̰ų� �Ѵ� 1�̸� 1, �� �ܿ��� 0
	cout << std::bitset<4>(a | b) << endl; // 1110
	// ^ : ���� ���� ������ ���� �� �ڸ��� ���� ���� �ϳ��� 1�̸� 1, �Ѵ� 1�̸� 0, �� �ܿ��� 0
	cout << std::bitset<4>(a ^ b) << endl; // 1010

	// = �� ���յ� ���� ����
	cout << std::bitset<4>(a &= b) << endl; // 0100
	

	//
	unsigned int c = 0b0110;
	cout << std::bitset<4>(c >> 2) << endl; // 0001
	
	return 0;
}