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
	return new int[size]; // 주소를 반환
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
	int* valueA = getValue(3); // 권장하지 않음
	int valueB = *getValue(3); // 권장하지 않음 | 사라지는 변수 val을 de-referencing하는 행위 | warning C4172: returning address of local variable or temporary: val
	cout << valueA << " " << valueB << endl; // 주소, 6

	//
	int* arr = allocateMemory(1024);
	delete[] arr; // 번거로움

	//
	int value = getValue2(5);
	cout << value << endl; // 10
	
	//
	std::array<int, 100> my_arr;
	my_arr[30] = 10;

	get(my_arr, 30) = 1024;
	cout << my_arr[30] << endl; // 1024

	// 번거로움
	Sct my_sct = getStruct();
	my_sct.b;

	// 불편함
	std::tuple<int, double> my_tp = getTuple();
	cout << std::get<0>(my_tp) << endl; // 10 | a
	cout << std::get<1>(my_tp) << endl; // 3 | b
	
	// in C++ 17
	/* 
	auto [a1, a2] = getTuple(); // getTuple()로부터 받은 tuple값 a와 b를 각각 a1과 a2 변수를 선언하여 할당
	cout << a1 < << endl; // 
	cout << a2 < << endl;
	*/
	
	return 0;
}