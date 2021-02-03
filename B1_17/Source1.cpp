#include <iostream>
#include <cstdlib>
using namespace std;

/* 
	*** 제어 흐름 control flow *** 
	(1) 중단 : exit(0);
	(2) 점프 : goto, break, continue
	(3) 반복 루프 : while, do while, for
	(4) 예외처리 : try, catch, throw
	(5) 조건 분기 : if, switch
*/
 

// *** switch - case ***
// case문도 블럭 {} 으로 감쌀 수 있음
enum class Colors {
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE,
};

void printColorName(Colors color) {
	
	switch (color) {
	case Colors::BLACK :
		cout << "Black" << endl; 
		break;
	}

	switch (static_cast<int>(color)) {
	case 0:
		cout << "Black" << endl;
		break;
	}
}
int main3() {
	// 
	int x;
	if (x = 0) { // 미실행
		cout << x << endl;
	}
	cout << x << endl; // 0

	printColorName(Colors::BLACK);
	int a;
	cin >> a;
	{
		switch (a) {
		case 0:
			cout << "Zero" << endl;
			break; // 의도적으로 break 사용하지 않는 경우도 있음
		case 1:
			cout << "One" << endl;
			break;
		case 2:
			cout << "Two" << endl;
			break;
		case 3:
			cout << "Three" << endl;
			break;
		}
		cout << endl;
	}

	//
	int i;
	cin >> i;
	switch (i) {
		int p; // 변수 선언은 가능 (권장하지 않음)
		int q;
		/*int q = 5; 값 할당은 불가능*/
	case 0:
		q = 10;
		int u;
		break;
	}

	//
	int k;
	cin >> k;
	switch (k) {

	case 0:
		int m; // 선언을 case에서 하여도 switch 안에서 선언한 것으로 간주
		break;
	case 1:
		m = 100;
		cout << m << endl; // case0에서 선언된 변수m에 값을 할당할 수 있고 출력 가능

	default:
		cout << "Undefined input " << k << endl;
		break;
	}

	return 0;
}