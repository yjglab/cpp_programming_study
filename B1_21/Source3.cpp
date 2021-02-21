#include <iostream>

using namespace std;
// *** 참조 변수 reference variable
// reference 변수에는 리터럴 값을 직접 할당할 수 없음 | 상수 reference 변수에는 가능

void func(int &n) { // reference를 사용하는 경우 변수 자체를 넘겨받음 | 그냥 n을 받는 경우 main에 영향을 주지 않음
	cout << &n << endl; // 주소 동일
	n = 10;
	cout << "In func " << n << endl; // 10
}

void printElements(const int(&arr)[5]) { // 배열의 크기는 반드시 입력
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " "; // 1 2 3 4 5
	}
	cout << endl;
}

struct Some {
	int v1;
	float v2;
};

struct Other {
	Some srt;
};
int main() {
	int value = 5;
	int& ref = value; // 내부적으로 ref와 value가 같은 변수처럼 작동 | 참조 관계

	cout << ref << endl; // 5
	ref = 10; // == *ptr = 10
	cout << value << endl; // 10

	int* ptr = nullptr;
	ptr = &value;

	cout << &value << endl; // 동일
	cout << &ref << endl; // 동일
	cout << ptr << endl; // 동일

	//
	int x = 5;
	int& ref_x = x;
	const int y = 8;
	/* int& ref_y = y; 할당 불가*/
	const int& ref_y = y;
	
	// ref의 값 재할당 가능
	int val1 = 10;
	int val2 = 20;

	int& ref1 = val1;
	cout << ref1 << endl; // 10
	ref1 = val2;
	cout << ref1 << endl; // 20

	//
	int n = 5;
	cout << &n << endl;

	func(n); // 10
	cout << n << endl; // 10
	
	// array를 함수에 넣을때도 reference를 사용할 수 있음
	const int length = 5;
	int arr[length] = { 1, 2, 3, 4, 5 };

	printElements(arr);

	//
	Other ot;
	ot.srt.v1 = 1; // 일반적인 접근법
	int& v1 = ot.srt.v1;
	v1 = 1; // reference 사용을 통한 접근법 (매우 유용)

	//
	int val = 100;
	int* const ptr_v = &val;
	int& ref_val = val;

	/* *ptr = 10 == ref_val = 10 */

	return 0;
}