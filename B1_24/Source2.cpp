#include <iostream>
#include <array>
#include <tuple>
using namespace std;
// *** return values

int* getValue(int x) { // return by address
	int val = x * 2;
	return &val;
}

int* allocateMemory(int size) { // return by address
	return new int[size]; // �ּҸ� ��ȯ
}

int& getValue2(int x) { // return by reference
	int val = x * 2;
	return val;
}

int& get(std::array<int, 100>& my_arr, int ix) {
	return my_arr[ix];
}

struct Sct {
	int a, b, c, d;
};

Sct getStruct() {
	Sct my_sct{ 1, 2, 3, 4 };
	return my_sct;
}

std::tuple<int, double> getTuple() { // return type : int, double
	int a = 10;
	double b = 3.14;
	return std::make_tuple(a, b);
}
int main4() {
	int* valueA = getValue(3); // �������� ����
	int valueB = *getValue(3); // �������� ���� | ������� ���� val�� de-referencing�ϴ� ���� | warning C4172: returning address of local variable or temporary: val
	cout << valueA << " " << valueB << endl; // �ּ�, 6

	//
	int* arr = allocateMemory(1024);
	delete[] arr; // ���ŷο�

	//
	int value = getValue2(5);
	cout << value << endl; // 10
	
	//
	std::array<int, 100> my_arr;
	my_arr[30] = 10;

	get(my_arr, 30) = 1024;
	cout << my_arr[30] << endl; // 1024

	// ���ŷο�
	Sct my_sct = getStruct();
	my_sct.b;

	// ������
	std::tuple<int, double> my_tp = getTuple();
	cout << std::get<0>(my_tp) << endl; // 10 | a
	cout << std::get<1>(my_tp) << endl; // 3 | b
	
	// in C++ 17
	/* 
	auto [a1, a2] = getTuple(); // getTuple()�κ��� ���� tuple�� a�� b�� ���� a1�� a2 ������ �����Ͽ� �Ҵ�
	cout << a1 < << endl; // 
	cout << a2 < << endl;
	*/
	
	return 0;
}