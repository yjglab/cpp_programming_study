#include <iostream>

using namespace std;

void printArr(int* arr) { // == void printArr(int arr[]) 
	cout << sizeof(arr) << endl; // 4
	cout << *arr << endl; // 9

	*arr = 100;
}

struct myStruct {
	int arr_s[5] = { 90, 70, 50, 30, 10 };
};

void func(myStruct ms) {
	cout << sizeof(ms.arr_s) << endl; // 20
}

void func2(myStruct *ms) { // array가 struct나 class안에 들어있을 경우, 파라미터로 들어왔을 때 포인터로 변환되지 않음
	cout << sizeof((*ms).arr_s) << endl; // 20
	cout << (*ms).arr_s << endl; // arr_s 자체(즉, 주소)
}

int main5() {

	// *** array == pointer ***
	int arr[5] = { 9, 7, 5, 3, 1 };
	cout << arr << endl; // arr는 그 자체가 주소를 값으로 가진다
	cout << &arr[0] << endl; // 첫번째 원소의 주소 == 배열 자체의 값
	cout << *arr << endl; // 9

	char name[] = "james";
	cout << *name << endl; // j

	//
	int* ptr = arr;
	cout << ptr << endl; // 주소
	cout << &ptr << endl; // 포인터 변수의 주소
	cout << *ptr << endl; // 9

	//
	int arr2[5] = { 9, 7, 5, 3, 1 };
	cout << sizeof(arr2) << endl; // 20
	int* ptr_a = arr2; 
	cout << sizeof(ptr_a) << endl; // 4 | 포인터 변수 자체의 size | intager pointer라서 4인 것이 아님
	
	//
	printArr(arr2); 
	cout << arr2[0] << " " << *arr2 << endl; // 100 100
	
	// 현재 arr2 = { 100, 7, 5, 3, 1 }
	cout << *ptr_a << " " << *(ptr_a + 1) << endl; // 100 7 
	
	//
	myStruct ms;
	cout << ms.arr_s[0] << endl; // 90
	
	cout << sizeof(ms.arr_s) << endl; // 20
	func(ms); // 20
	
	func2(&ms); // 20
	return 0;
}