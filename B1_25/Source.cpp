#include <iostream>
#include <array>
#include <functional>

using namespace std;

// *** �Լ� ������ ***
int func(int x) {
	return 5;
}
int func2(int x) {
	return 10;
}

bool isEven(const int& num) {
	if (num % 2 == 0) return true;
	else return false;
}
bool isOdd(const int& num) {
	if (num % 2 != 0) return true;
	else return false;
}
void printNum(const array<int, 10>& my_arr, bool(*check_f)(const int&)) {
	for (auto element : my_arr) {
		if (check_f(element) == true) {
			cout << element;
		}
	}
	cout << endl;
}

// typedef (���� �ϳ��� ���)
typedef bool(*check_f_t)(const int&);
// using (���� �ϳ��� ���)
using check_f_t = bool(*)(const int&);
void printNum2(const array<int, 10>& my_arr, check_f_t check_f = isEven) {
	for (auto element : my_arr) {
		if (check_f(element) == true) {
			cout << element;
		}
	}
	cout << endl;
}

// functional
void printNum3(const array<int, 10>& my_arr, 
	std::function<bool(const int&)> check_f) {
	for (auto element : my_arr) {
		if (check_f(element) == true) {
			cout << element;
		}
	}
	cout << endl;
}

int main2() {
	
	cout << func << endl; // func�� �ּ� | �Լ��� ������
	cout << func(1) << endl; // 5

	// �Լ������� : return type, parameter type�� �Ҵ��� ���� ���� ��ġ�ؾ� ���� �Ҵ� ����
	int(*ptr_f)(int) = func;
	cout << ptr_f(1) << endl; // 5 | ptr_f�� ����Ű�� �ִ� ���� ���
	ptr_f = func2;
	cout << ptr_f(1) << endl; // 10

	//
	std::array<int, 10> my_arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printNum(my_arr, isEven); // 02468
	printNum(my_arr, isOdd); // 13579
	//�Ű����� �Լ������Ϳ� default���� �ִ� ��� 
	printNum2(my_arr); // 02468

	//
	cout << endl;
	std::function<bool(const int&)> fcnptr;
	fcnptr = isEven;
	printNum3(my_arr, fcnptr); // 02468
	fcnptr = isOdd;
	printNum3(my_arr, fcnptr); // 13579
	return 0;
}