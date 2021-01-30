#include <iostream>
#include <limits>

int main() {
	using namespace std;

	// *** char Datatype ***

	char c1(65);
	char c2('A');
	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl; // A A 65 65
	
	// C style casting
	cout << (char)65 << endl; // A
	cout << (int)'A' << endl; // 65
	// C++ style casting
	cout << char(65) << endl; // A
	cout << int('A') << endl; // 65
	cout << static_cast<char>(65) << endl; // A
	cout << static_cast<int>('A') << endl; // 65

	char c3(97);
	cout << c3 << endl; // a
	cout << static_cast<int>(c3) << endl; // 97
	cout << c3 << endl; // a

	// ** static_cast< > : Ÿ������ ������ ĳ���õǴ� ����� Ȯ���� �˸� �� ������.
	// ** ���� char ������ "abc"�� �ް� �� ��� a�� �ް� ������ ������ ���ۿ� ���� | �� ���� ��¿��� ���ۿ� ����� ���� ���
	char c4(65);
	cin >> c4;
	cout << c4 << " " << static_cast<int>(c4) << endl; // (abc�� �Է��� ���=>) a 97
	cin >> c4;
	cout << c4 << " " << static_cast<int>(c4) << endl; // (abc�� �Է��� ���=>) b 98
	cin >> c4;
	cout << c4 << " " << static_cast<int>(c4) << endl; // (abc�� �Է��� ���=>) c 99
	cin >> c4;
	cout << c4 << " " << static_cast<int>(c4) << endl; // �ٽ� �Է°��� ����

	//
	cout << sizeof(char) << endl; // 1
	cout << (int)std::numeric_limits<char>::max() << endl; // 127
	cout << (int)std::numeric_limits<char>::lowest() << endl; // -128

	cout << sizeof(unsigned char) << endl; // 1
	cout << (int)std::numeric_limits<unsigned char>::max() << endl; // 255
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl; // 0

	// \n : �ܼ� �ٹٲ� | std::endl : ���ۿ� �ִ� ��� ������ ��� �� �ٹٲ� | std::flush : ���ۿ� �ִ� ��� ������ ��¸� ��
	char c5(65);
	cout << "This is first line \nsecond line" << endl;
	cout << int('\n') << endl; // 10
	cout << " \" "; // \"�� �ϳ��� ����(")�� ������.
	cout << " \? "; // ?

	// 
	wchar_t c6; // window character | �� ������� ����.
	char16_t c7; // ASCII �� �ٸ� ����(�����ڵ�) ���
	char32_t c7; // ASCII �� �ٸ� ����(�����ڵ�) ���
	return 0;
}