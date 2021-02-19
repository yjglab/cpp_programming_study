#include <iostream>
#include <cmath>
#include <limits> 

int main() {
	using namespace std;

	// *** ������(singed int, unsigned int) *** 
	// int i = 1;
	// 00000000 00000000 00000000 00000001 | �� �� 1bit�� ��ȣ�� ���

	short s = 1; 
	int i = 1;
	long l = 1;
	long long ll = 1;

	// (singed) int : ���� ����, 0, ���� ���� ǥ�� | �� �� 1bit�� ��ȣ �Է¿� ���. | singed�� ���� ����
	// unsinged int : ���� ����, 0 ǥ��
	
	cout << sizeof(short) << endl; // 2 bytes = 2 * 8 bits = 16 bits
	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl; // 32767 | 2^15 - 1(��ȣ) - 1(0) | singed short�� ǥ���� �� �ִ� ���� ū ��
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