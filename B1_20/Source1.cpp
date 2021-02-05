#include <iostream>
#include <cstddef>

using namespace std;
// *** null pointer ***

void func(double* ptr) {

	cout << "address of pointer variable in func()" << &ptr << endl;

	if (ptr != nullptr) {
		// do something
		cout << *ptr << endl;
	}
	else {
		// do nothing
		cout << "Null ptr, do nothing" << endl;
	}
}
int main3() {

	double* ptr = nullptr; // modern c++ style | c-style에서는 0이나 NULL을 넣어줌
	func(ptr); // Null ptr, do nothing
	func(nullptr); // Null ptr, do nothing

	double d = 123.4;
	func(&d); // 123.4

	ptr = &d;
	func(ptr); // 123.4

	// 포인터 변수가 함수의 parameter로 넘겨지면 그곳에서 재정의된다. (주소도 바뀜)
	cout << "address of pointer variable in main()" << &ptr << endl;
	
	//
	std::nullptr_t nptr; // parameter 중 반드시 nullptr만 받는 경우 사용


	return 0;
}