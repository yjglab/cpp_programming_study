#include <iostream>

using namespace std;
// *** ���� �Ҵ� �迭
int main3() {

	int length;
	cin >> length;
	int* arr = new int[length]; // new int[length]() �� �ϸ� �Ҵ��� �ȵ� �κ��� 0���� �ʱ�ȭ
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;

	for (int i = 0; i < length; i++) {
		cout << (uintptr_t)&arr[i] << endl;
		cout << arr[i] << endl;
	}

	delete[] arr; // ���̾� �ִ� �� ������ �迭�� delete �ϴ� ����̴� | new�� ����� ��� �ݵ�� delete���� ��ȯ���ֱ�
	
	//
	int fixedArr[] = { 1, 2, 3, 4, 5 };
	int* arrPtr = new int[5]{ 1, 2, 3, 4 ,5 };

	delete[] arrPtr;
	return 0;
}