#include <iostream>
// *** auto Ű����

using namespace std;

auto add(int x, int y) { // parameter�� auto�� ���� �� ����
	return x + double(y);
}

auto func(int x, int y) -> int; // trailing return Ÿ�� : �ڵ� ���������� ���� ���, ���� ���� �ϱ�����



int main2() {
	
	auto a = 10; // int a = 10 | �ڷ��� �߷�
	auto b = 123.0; // double
	auto c = 1 + 2.0; // double

	auto result = add(1, 2); // double

	return 0;
}