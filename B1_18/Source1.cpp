#include <iostream>

using namespace std;

struct Rectangle {
	int length;
	int width;
};

enum studentName {
	JAMES,
	AMY,
	TIMME,
	TOTAL_STUDENTS,
};

void func(int hArr[]) { // parameter 자리에 들어온 hArr[]은 포인터이며, 배열이 아님 | hArr의 모든 원소를 복사해서 가져오는 것이 아니라 hArr의 첫번째 주소 값만 복사해옴 
	cout << (long long)&hArr << endl; // parameter로 넘겨받은 hArr의 첫번째 주소 값을 저장하는 "포인터 변수의 주소"
	cout << (long long)&hArr[0] << endl; // 포인터 변수 hArr에 들어있는 0번 index의 주소 값
	cout << hArr[0] << endl; // 1
	cout << hArr[1] << endl; // 2
	cout << hArr[2] << endl; // 3
	cout << "Size hArr in func  : " << sizeof(hArr) << endl; // Size hArr in func  : 4 | x86
}

int main() {
	// *** array ***
	
	int var; // 1 var
	int arr[5]; // 5 int
	cout << sizeof(var) << endl; // 4
	cout << sizeof(arr) << endl; // 20

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	int arr2[5] = { 1, 2, 3, 4, 5 };
	int arr3[]{ 1, 2, 3, 4, 5 };
	//
	cout << sizeof(Rectangle) << endl; // 8

	Rectangle rectArr[10];
	cout << sizeof(rectArr) << endl; // 80

	rectArr[0].length = 1;
	rectArr[0].width = 2;

	//
	int studentScores[TOTAL_STUDENTS];
	studentScores[JAMES] = 20;
	studentScores[AMY] = 20;
	studentScores[TIMME] = 20;

	//
	int num = 0;
	/*cin >> num; // runtime*/
	/*int inputs[num]; // compile time*/

	//
	const int h = 100;
	int hArr[h] = {1, 2, 3 ,4 ,5, };
	cout << (int)&hArr << endl; // 0번째 index와
	cout << (int)&hArr[0] << endl; // 같은 주소를 가짐
	cout << (int)&hArr[1] << endl;
	cout << (int)&hArr[2] << endl;
	cout << sizeof(hArr) << endl; // 400

	//
	cout << (long long)&hArr << endl; // hArr의 주소
	cout << hArr[0] << endl; // 1
	cout << hArr[1] << endl; // 2
	cout << hArr[2] << endl; // 3
	cout << "Size hArr in Main  : " << sizeof(hArr) << endl; // Size hArr in Main  : 400

	func(hArr); 

	// * 배열은 이름(식별자 identifier) 자체가 주소로 사용됨. &사용 하지 않아도 주소를 얻을 수 있음

	return 0;
}