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

void func2(myStruct *ms) { // array�� struct�� class�ȿ� ������� ���, �Ķ���ͷ� ������ �� �����ͷ� ��ȯ���� ����
	cout << sizeof((*ms).arr_s) << endl; // 20
	cout << (*ms).arr_s << endl; // arr_s ��ü(��, �ּ�)
}

int main5() {

	// *** array == pointer ***
	int arr[5] = { 9, 7, 5, 3, 1 };
	cout << arr << endl; // arr�� �� ��ü�� �ּҸ� ������ ������
	cout << &arr[0] << endl; // ù��° ������ �ּ� == �迭 ��ü�� ��
	cout << *arr << endl; // 9

	char name[] = "james";
	cout << *name << endl; // j

	//
	int* ptr = arr;
	cout << ptr << endl; // �ּ�
	cout << &ptr << endl; // ������ ������ �ּ�
	cout << *ptr << endl; // 9

	//
	int arr2[5] = { 9, 7, 5, 3, 1 };
	cout << sizeof(arr2) << endl; // 20
	int* ptr_a = arr2; 
	cout << sizeof(ptr_a) << endl; // 4 | ������ ���� ��ü�� size | intager pointer�� 4�� ���� �ƴ�
	
	//
	printArr(arr2); 
	cout << arr2[0] << " " << *arr2 << endl; // 100 100
	
	// ���� arr2 = { 100, 7, 5, 3, 1 }
	cout << *ptr_a << " " << *(ptr_a + 1) << endl; // 100 7 
	
	//
	myStruct ms;
	cout << ms.arr_s[0] << endl; // 90
	
	cout << sizeof(ms.arr_s) << endl; // 20
	func(ms); // 20
	
	func2(&ms); // 20
	return 0;
}