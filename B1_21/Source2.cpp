#include <iostream>
using namespace std;

int main4() {
	 // *** �����Ϳ� const ***
	const int val = 5;
	const int* ptr = &val;
	/* *ptr = 50; de-referencing �Ұ� */
	// val �� ����� �ƴҰ�� val�� ���� �ٲ� �� ������ ptr�� ��� ������ ������ ��쿡�� de-referencing�� �Ұ���
	cout << *ptr << endl;

	// const int* ptr �� �ǹ� : �ּҰ��� �������� ���ϰ� �ϰڴ� X => ptr�� ����Ű�� ���� �������� ���ϰ� �ϰڴ� O
	int value1 = 10;
	const int* ptr_v = &value1;

	int value2 = 20;
	ptr_v = &value2;

	// int* const ptr �� �ǹ� : �ּҰ��� ������ �� ���� | ptr�� ����Ű�� ���� ������ �� ����
	int val1 = 5;
	int* const ptr_a = &val1;

	*ptr_a = 10;
	
	int val2 = 10;
	/* ptr_a = &val2; �ּ� ���� �Ұ�*/
	
	// const int* const ptr �� �ǹ� : �ּҰ� ���� X | ptr�� ����Ű�� �� ���� X
	int val3 = 30;
	const int* const ptr_b = &val3;

	
	return 0;
}