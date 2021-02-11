#include <iostream>
#include <cassert>
#include <array>
// *** assert �ܾ��ϱ� ***
using namespace std;

void printVal(const std::array<int, 5>& arr_ref, const int& ix) {
	assert(ix >= 0); // &&�� ������ �� ������ ������ �����κ��� Ȯ���ϱ� ���� ����
	assert(ix <= arr_ref.size() - 1);
	cout << arr_ref[ix] << endl;
}

int main6() {
	// assert() : ȯ�漳������ ��弳���� ���� �۵� ���� ���� | �⺻�� Debug��忡�� �۵�
	int number = 5;
	assert(number == 5); // number�� �ݵ�� 5���߸� �Ѵٷ� ���� | 5�� �ƴ϶�� error
	
	//
	std::array<int, 5> myArr{ 1, 2, 3 ,4 ,5 };
	printVal(myArr, 3); // 4

	// static_assert() : compile time���� Ȯ������ ���� ���;���
	const int a = 10;
	static_assert(a == 10, "10�� �ƴ϶�� ������ ���� �� �ֽ��ϴ�");

	return 0;
}