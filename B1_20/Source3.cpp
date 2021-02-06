#include <iostream>
using namespace std;

int main() {

	int val = 7;
	int* ptr = &val;

	// 주소가 1칸 이동한다 == 데이터 크기만큼 주소 증감
	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;

	//
	int arr[] = { 9, 7, 5, 3, 1 };
	cout << arr[0] << " " << (uintptr_t)&arr[0] << endl; // 주소가 이웃해있음 | 4씩 증가
	cout << arr[1] << " " << (uintptr_t)&arr[1] << endl;
	cout << arr[2] << " " << (uintptr_t)&arr[2] << endl;
	cout << arr[3] << " " << (uintptr_t)&arr[3] << endl;
	cout << arr[3] << " " << (uintptr_t)&arr[4] << endl;

	cout << endl;

	int* arrPtr = arr;
	for (int i = 0; i < 5; i++) {
		cout << *(arrPtr + i) << " " << (uintptr_t)(ptr + i) << endl;
	}

	//
	char name[] = "jame jame";
	const int n_name = sizeof(name) / sizeof(name[0]); // 원소 개수 구하기

	for (int i = 0; i < n_name; i++) {
		cout << *(name + i); // jame jame
	}

	cout << endl;

	//
	const char* myname = "charles jin";
	const char* myname2 = "charles jin";
	cout << myname << endl;
	cout << myname2 << endl; // charles jin
	cout << (uintptr_t)myname << endl;
	cout << (uintptr_t)myname2 << endl; // 같은 값을 가지고 있어서 같은 메모리 주소를 가지게 됨(그 변수가 상수인 경우만)
	
	// cout의 문자열 특별 처리 : 문자열 포인터는 문자열일 가능성을 우선으로 두므로 array를 모두 출력해냄
	cout << myname2 << endl; // charles jin

	char c = 'Q';
	cout << &c << endl; // Q儆儆儆儆닾U | 문자열일 것이라 가정하고 \0이 나올때까지 계속 출력
	
	return 0;
}