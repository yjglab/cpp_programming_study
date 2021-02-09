#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// *** parameter | actual parameters
int callByVal(int a, int b) { 
	cout << "call by Val : in func " << a << " " << &a << endl;
	return a + b;
}

void callByRef(int& y) {
	y = y + 1;
}

void callByRef2(int*& ptr_ref) { // void kk((int*) &ptr_k) | 포인터 변수를 reference 로 받기 | typedef를 써서 알아보기 쉽게 바꾸는 방법도
	cout << ptr_ref << " " << &ptr_ref << endl;
}
void getSinCos(const double& degrees, double& sin_out, double& cos_out) { // 입력, 출력, 출력
	static const double pi = 3.141592;
	const double radians = degrees * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
	
}

void printElement(int(&arr)[4]) { // 배열 크기 입력 필수 | 구차함	
}
void printElementUsingVector(const vector<int>& arr_v) { // vector array를 사용해 ref를 받는 방식
}

int main2() {
	// call by value 값에 의한 전달
	int x = 1;
	int y = 2;
	callByVal(x, y + 1); // 변수 x와 y + 1을 보내는 것이 아니라 그 값인 1과 2+ 1을 보냄
	cout << "call by Val : in main " << x << " " << &x << endl;

	// call by reference 참조에 의한 인수 전달 (빈도 높음)
	int i = 5;
	cout << "call by Ref : in main " << i << " " << &i << endl; // 5 | 주소 동일
	callByRef(i); // 변수 i 자체를 인자로 전달
	cout << "call by Ref : in main " << i << " " << &i << endl; // 6 | 주소 동일
	
	// 
	double sin(0.0);
	double cos(0.0);
	getSinCos(30.0, sin, cos);
	cout << sin << " " << cos << endl;

	//
	int k = 10;
	int* ptr_k = &k;

	cout << ptr_k << " " << &ptr_k << endl; // ptr_k의 값(k의 주소), ptr_k의 주소
	callByRef2(ptr_k); // // ptr_k의 값(k의 주소), ptr_k의 주소

	//
	int arr[]{ 1, 2 ,3 ,4 };
	printElement(arr);
	
	vector<int> arr_v{ 1, 2 ,3 ,4 };
	printElementUsingVector(arr_v);

	return 0;
}