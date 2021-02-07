#include <iostream>

using namespace std;

void func(const int& x) {
	cout << x << endl;
}
int main2() {
	
	const int x = 5;
	const int& ref_x = x;
	const int& ref_x2 = ref_x;

	//
	const int& ref_z = 3 + 4; // ��� reference���� ���ͷ� ���� �Ҵ� ����
	cout << ref_z << endl; // 7
	cout << &ref_z << endl; // �ּ�

	// &ref_x(���۷���) �� ref_x(�Ϲݺ���)�� ����?
	int a = 1;
	func(a); // 1
	func(1); // 1 | func�� parameter�� ��� ���۷����� ��� ���ͷ� ���� ���� �� ����
	func(a + 3); // 4


	return 0;
}