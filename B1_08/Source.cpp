#include <iostream>
#include <cmath>
#include <limits> // �����Ϸ��� �����

int main() {
	using namespace std;

	// *** ������(singed int, unsigned int) *** 
	// int i = 1;
	// 00000000 00000000 00000000 00000001 | �Ǿ� 1bit�� ��ȣ�� ���

	short s = 1; 
	int i = 1;
	long l = 1;
	long long ll = 1;

	// singed �ڷ���(+,-�� ǥ���ϴ� �ڷ���)�� �� �� 1bit�� ��ȣ �Է¿� ���.
	cout << sizeof(short) << endl; // 2 bytes = 2 * 8 bits = 16 bits
	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl; // 32767 | 2^15 - 1(��ȣ) - 1(0) | singed short�� ǥ���� �� �ִ� ���� ū ��
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