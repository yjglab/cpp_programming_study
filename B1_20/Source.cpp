#include <iostream>
#include <typeinfo>

// 지역 변수는 '스택' 메모리 사용
// 동적 할당 메모리는 '힙' 메모리 사용
using namespace std;

// parameter로 포인터를 받는 함수
int* ptrFunc(int* ptr_a) {
	return 0;
}

struct something {
	int a, b, c, d;
};
int main() {
	// *** pointer ***
	int x = 5;
	cout << &x << endl; // address of operator | ampersand

	// de-reference operator (*)
	/* reference : 간접적 접근 | de-reference : 직접적 접근 */
	// *와 &가 함께있다 => 주소를 접근하여 값을 가져옴 = 그 의미를 상쇄
	cout << *&x << endl; // 5 | ==x | 그 메모리 주소에 직접 접근하여 값을 알아봄 

	// 포인터란 메모리 주소를 값으로 담는 '변수'
	int* ptr_x; // 포인터 변수 선언 (아직 값은 들어있지 않음)
	ptr_x = &x; // 포인터 변수 ptr_x에 x의 주소 값을 부여

	//
	int* ptr_a = &x, * ptr_b = &x;
	cout << ptr_a << endl; // 주소
	cout << *ptr_a << endl; // 주소에 담긴 값

	// 
	/* double* ptr_d = 0x004FFDA8; // err */

	//
	double d = 123.0;
	cout << typeid(ptr_x).name() << endl; // int *

	cout << sizeof(x) << endl; // 4
	cout << sizeof(d) << endl; // 8
	cout << sizeof(&x) << " " << sizeof(ptr_x); // 4 4
	cout << sizeof(&d) << " " << sizeof(ptr_x); // 4 4

	//
	cout << endl;
	something st;
	something* ptr_st;
	cout << sizeof(something) << endl; // 16
	cout << sizeof(ptr_st) << endl; // 4
	return 0;
}