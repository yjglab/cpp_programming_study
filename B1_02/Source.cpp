#include <iostream>

using namespace std;

// *** 함수 ***
// 함수 내에서 또다른 함수 정의는 불가능
int addTwoNumbers(int num_a, int num_b) { // *tip : 반복된 글자 한번에 바꾸기 => 더블클릭 + Ctrl + R
	int sum = num_a + num_b;

	return sum;
}

int main() {
	cout << addTwoNumbers(1, 2) << endl; // 3

	return 0;
}