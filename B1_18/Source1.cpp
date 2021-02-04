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

void func(int hArr[]) { // parameter �ڸ��� ���� hArr[]�� �������̸�, �迭�� �ƴ� | hArr�� ��� ���Ҹ� �����ؼ� �������� ���� �ƴ϶� hArr�� ù��° �ּ� ���� �����ؿ� 
	cout << (long long)&hArr << endl; // parameter�� �Ѱܹ��� hArr�� ù��° �ּ� ���� �����ϴ� "������ ������ �ּ�"
	cout << (long long)&hArr[0] << endl; // ������ ���� hArr�� ����ִ� 0�� index�� �ּ� ��
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
	cout << (int)&hArr << endl; // 0��° index��
	cout << (int)&hArr[0] << endl; // ���� �ּҸ� ����
	cout << (int)&hArr[1] << endl;
	cout << (int)&hArr[2] << endl;
	cout << sizeof(hArr) << endl; // 400

	//
	cout << (long long)&hArr << endl; // hArr�� �ּ�
	cout << hArr[0] << endl; // 1
	cout << hArr[1] << endl; // 2
	cout << hArr[2] << endl; // 3
	cout << "Size hArr in Main  : " << sizeof(hArr) << endl; // Size hArr in Main  : 400

	func(hArr); 

	// * �迭�� �̸�(�ĺ��� identifier) ��ü�� �ּҷ� ����. &��� ���� �ʾƵ� �ּҸ� ���� �� ����

	return 0;
}