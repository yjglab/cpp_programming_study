#include <iostream>


// *** 전처리기 ***
// #define의 효력 범위 : 해당 파일 까지만.
using namespace std;
#define MY_MACRO "I'm Macro" // 매크로(주로 대문자로 / 최근에는 잘 사용하지 않음) 
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define LIKE_APPLE

void usingMacro();

int main() {
	usingMacro();


	return 0;
}

void usingMacro() {
	// 매크로 사용
	cout << MY_MACRO << endl; // 9
	cout << MAX(1 + 3, 2) << endl; // 4

	// 매크로 사용2
#ifdef LIKE_APPLE // if defined
	cout << "Apple" << endl;
#endif

#ifndef LIKE_APPLE // if not defined
	cout << "Orange " << endl;
#endif
}