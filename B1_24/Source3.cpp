#include <iostream>
using namespace std;

inline int min(int x, int y) { // *** 인라인 함수 ***
// 헤더 파일의 함수를 정의할때 보통 사용
	return x > y ? y : x;
}

int add(int x, int y) {
	return x + y;
}

double add(double x, double y) {
	return x + y;
}

typedef int my_int;
void print(int x) {}
// void print(my_int x) {} 위와 동일한 함수

void pnt(char* value) {}
void pnt(const char* value) {
	cout <<  value << endl; // a
}
void pnt(int value) {}

//
void pnt2(unsigned int value) {}
void pnt2(float value) {}

int main5() {

	cout << min(5, 6) << endl;
	
	// 함수 오버로딩 : 주어진 인자에 맞는 자료형을 받는 함수를 찾아 실행
	add(1, 2); 
	add(3.0, 4.0); 

	//
	pnt(0); // 세번째 pnt로 오버로딩
	pnt('a'); // 세번째 pnt로 오버로딩 (int로)
	pnt("a"); // 두번째 pnt로 오버로딩

	/*
	pnt2('a'); // ambiguous call to overloaded function
	pnt2(0); // ambiguous call to overloaded function
	pnt2(3.141592); // ambiguous call to overloaded function
	*/
	pnt2((unsigned int)'a');
	pnt2(3.141592f);
	pnt2(0u);

	return 0;
}