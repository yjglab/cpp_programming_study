#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

// *** ������ enumerated types ***
// �������� ���� ��ġ�� �ʴ� ���� ����

enum Color { // user-defined data types
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
	/*BLUE,*/
};
enum Feel {
	HAPPY = -3,
	JOY,
	TIRED = 5,
	BLUE,
};

int main() {
	Color paint = COLOR_BLACK; 
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	cout << paint << " " << COLOR_BLACK << endl; // 0 0
	
	//
	int redId = COLOR_RED;
	cout << redId << endl;
	// Color myColor = 3; enum �ڷ����� int�� ���� ���� ������ �� ����
	Color myColor = static_cast<Color>(3); // ĳ������ ����

	// * �������� ���� (Ÿ���� �Ǽ� ����)
	string str_input;
	getline(cin, str_input);
	if (str_input == "COLOR_BLACK") myColor = static_cast<Color>(0);

	return 0;
}