#include <iostream>

using namespace std;

// *** �Լ� ***
// �Լ� ������ �Ǵٸ� �Լ� ���Ǵ� �Ұ���
int addTwoNumbers(int num_a, int num_b) { // *tip : �ݺ��� ���� �ѹ��� �ٲٱ� => ����Ŭ�� + Ctrl + R
	int sum = num_a + num_b;

	return sum;
}

int main() {
	cout << addTwoNumbers(1, 2) << endl; // 3

	return 0;
}