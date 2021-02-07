#include <iostream>

using namespace std;

void func(const int& x) {
	cout << x << endl;
}
int main2() {
	
	const int x = 5;
	const int& ref_x = x;
	const int& ref_x2 = ref_x;

	//
	const int& ref_z = 3 + 4; // 상수 reference에는 리터럴 값을 할당 가능
	cout << ref_z << endl; // 7
	cout << &ref_z << endl; // 주소

	// &ref_x(레퍼런스) 와 ref_x(일반변수)의 차이?
	int a = 1;
	func(a); // 1
	func(1); // 1 | func의 parameter가 상수 레퍼런스인 경우 리터럴 값도 보낼 수 있음
	func(a + 3); // 4


	return 0;
}