#include <iostream>

using namespace std;
// *** 동적 할당 배열
int main3() {

	int length;
	cin >> length;
	int* arr = new int[length]; // new int[length]() 로 하면 할당이 안된 부분은 0으로 초기화
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;

	for (int i = 0; i < length; i++) {
		cout << (uintptr_t)&arr[i] << endl;
		cout << arr[i] << endl;
	}

	delete[] arr; // 연이어 있는 긴 길이의 배열을 delete 하는 경우이다 | new를 사용한 경우 반드시 delete으로 반환해주기
	
	//
	int fixedArr[] = { 1, 2, 3, 4, 5 };
	int* arrPtr = new int[5]{ 1, 2, 3, 4 ,5 };

	delete[] arrPtr;
	return 0;
}