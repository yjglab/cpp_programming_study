#include <iostream>
using namespace std;

int main() {

	int val = 7;
	int* ptr = &val;

	// �ּҰ� 1ĭ �̵��Ѵ� == ������ ũ�⸸ŭ �ּ� ����
	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;

	//
	int arr[] = { 9, 7, 5, 3, 1 };
	cout << arr[0] << " " << (uintptr_t)&arr[0] << endl; // �ּҰ� �̿������� | 4�� ����
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
	const int n_name = sizeof(name) / sizeof(name[0]); // ���� ���� ���ϱ�

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
	cout << (uintptr_t)myname2 << endl; // ���� ���� ������ �־ ���� �޸� �ּҸ� ������ ��(�� ������ ����� ��츸)
	
	// cout�� ���ڿ� Ư�� ó�� : ���ڿ� �����ʹ� ���ڿ��� ���ɼ��� �켱���� �ιǷ� array�� ��� ����س�
	cout << myname2 << endl; // charles jin

	char c = 'Q';
	cout << &c << endl; // Q�������̈�U | ���ڿ��� ���̶� �����ϰ� \0�� ���ö����� ��� ���
	
	return 0;
}