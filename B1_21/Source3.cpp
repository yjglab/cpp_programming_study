#include <iostream>

using namespace std;
// *** ���� ���� reference variable
// reference �������� ���ͷ� ���� ���� �Ҵ��� �� ���� | ��� reference �������� ����

void func(int &n) { // reference�� ����ϴ� ��� ���� ��ü�� �Ѱܹ��� | �׳� n�� �޴� ��� main�� ������ ���� ����
	cout << &n << endl; // �ּ� ����
	n = 10;
	cout << "In func " << n << endl; // 10
}

void printElements(const int(&arr)[5]) { // �迭�� ũ��� �ݵ�� �Է�
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
	int& ref = value; // ���������� ref�� value�� ���� ����ó�� �۵� | ���� ����

	cout << ref << endl; // 5
	ref = 10; // == *ptr = 10
	cout << value << endl; // 10

	int* ptr = nullptr;
	ptr = &value;

	cout << &value << endl; // ����
	cout << &ref << endl; // ����
	cout << ptr << endl; // ����

	//
	int x = 5;
	int& ref_x = x;
	const int y = 8;
	/* int& ref_y = y; �Ҵ� �Ұ�*/
	const int& ref_y = y;
	
	// ref�� �� ���Ҵ� ����
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
	
	// array�� �Լ��� �������� reference�� ����� �� ����
	const int length = 5;
	int arr[length] = { 1, 2, 3, 4, 5 };

	printElements(arr);

	//
	Other ot;
	ot.srt.v1 = 1; // �Ϲ����� ���ٹ�
	int& v1 = ot.srt.v1;
	v1 = 1; // reference ����� ���� ���ٹ� (�ſ� ����)

	//
	int val = 100;
	int* const ptr_v = &val;
	int& ref_val = val;

	/* *ptr = 10 == ref_val = 10 */

	return 0;
}