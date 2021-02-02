#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

// *** 열거형 enumerated types ***
// 열거형의 값은 겹치지 않는 것이 좋음

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
	// Color myColor = 3; enum 자료형에 int형 값을 직접 대입할 수 없음
	Color myColor = static_cast<Color>(3); // 캐스팅은 가능

	// * 권장하지 않음 (타이핑 실수 방지)
	string str_input;
	getline(cin, str_input);
	if (str_input == "COLOR_BLACK") myColor = static_cast<Color>(0);

	return 0;
}