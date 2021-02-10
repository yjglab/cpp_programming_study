#include <iostream>
#include <string>

using namespace std;
// *** 매개변수 기본값 *** 
// default parameter가 있는 함수가 header파일 등에서 이미 선언된 경우
// 정의에서는 default parameter를 입력하면 안됨

void pnt3(int x = 2) { // default parameter 매개변수 기본값
	cout << x << endl;
}
void pnt4(int x = 1, int y = 2, int z = 3) { 
	cout << x << " " << y << " " << z << endl;
}
void pnt5(int x = 1); // if in header ...
void pnt5(int x) { }

void func(std::string str) {}
void func(char ch = ' ') {}

void pnt6(int x) {}
void pnt6(int x, int y) {}

int main() {
	
	pnt3(10); // 10
	pnt3(); // 2
	pnt4(1000); // 1000 2 3

	//
	func(); // char param을 가진 func로 오버로딩(빈칸을 parameter로 보냄)

	//
	pnt6(10); // 첫번째 pnt6로 오버로딩 | 두번쨰 pnt6의 parameter y가 default값 있는 경우 pnt6(10) => 오버로딩 불가

	return 0;
}