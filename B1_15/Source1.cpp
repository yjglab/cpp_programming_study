#include <iostream>
#include <typeinfo>
#include <iomanip>
using namespace std;
int main() {
	int a = 10;
	cout << typeid(4.0).name() << endl; // double | ���ͷ�(4.0)�� �ڷ����� ������.
	cout << typeid(a).name() << endl; // int
	
	// *** �� ��ȯ Type conversion ***
	// (1) �Ͻ��� �� ��ȯ
	int b = 100.5; // double�� ������ int�� ��ȯ

	// (2) ����� �� ��ȯ (ĳ����)
	// numeric promotion
	float f = 1.0f;
	double d = f; //  | �� ���� �޸� ������ ���� �� ū �޸� �������� ����

	// numeric conversion
	int i = 30000;
	char c = i; 
	cout << static_cast<int>(c) << endl; // 48 | char���� �ִ񰪺��� ���� ���� �̻��� ���� ��µ�

	double d2 = 0.123456789;
	float f2 = d2;
	
	int i2 = 1234;
	float f3 = i2;
	
	float f4 = 3.14;
	int i3 = f4;

	cout << std::setprecision(12) << f2 << typeid(f2).name() << endl; // 0.123456791043 | ���е� ����
	cout << std::setprecision(12) << d2 << typeid(d2).name() << endl; // 0.123456789
	cout << std::setprecision(12) << f3 << typeid(f3).name() << endl; // 1234
	cout << std::setprecision(12) << i3 << typeid(i3).name() << endl; // 3

	// �켱 ���� : int < unsigned int < long < unsigned long < long long < unsinged long long < float < double < long double
	cout << 5u - 10u << endl; // 4294967291 | �켱������ ���� int�� ��ȯ���� ����
	
	return 0;
}