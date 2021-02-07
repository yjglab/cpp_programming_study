#include <iostream>
using namespace std;

int main4() {
	 // *** 포인터와 const ***
	const int val = 5;
	const int* ptr = &val;
	/* *ptr = 50; de-referencing 불가 */
	// val 이 상수가 아닐경우 val의 값은 바꿀 수 있지만 ptr이 상수 포인터 변수인 경우에도 de-referencing은 불가함
	cout << *ptr << endl;

	// const int* ptr 의 의미 : 주소값을 변경하지 못하게 하겠다 X => ptr이 가리키는 값을 변경하지 못하게 하겠다 O
	int value1 = 10;
	const int* ptr_v = &value1;

	int value2 = 20;
	ptr_v = &value2;

	// int* const ptr 의 의미 : 주소값을 변경할 수 없음 | ptr이 가리키는 값은 변경할 수 있음
	int val1 = 5;
	int* const ptr_a = &val1;

	*ptr_a = 10;
	
	int val2 = 10;
	/* ptr_a = &val2; 주소 변경 불가*/
	
	// const int* const ptr 의 의미 : 주소값 변경 X | ptr이 가리키는 값 변경 X
	int val3 = 30;
	const int* const ptr_b = &val3;

	
	return 0;
}