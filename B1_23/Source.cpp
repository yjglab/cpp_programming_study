#include <iostream>
#include <array>
#include <algorithm> // sort

using namespace std;

// *** std::array ***

void printLength(array<int, 5> my_arr) {
	cout << my_arr.size() << endl;
}
void printLength_using_ref(array<int, 5>& my_arr) {
	cout << my_arr.size() << endl;
}
int main2() {
	int arr[] = { 1, 2, 3 ,4 ,5 };
	array<int, 5> my_arr = { 1, 2 ,3 ,4 ,5 }; // 공간은 반드시 설정해야 함
	
	my_arr = { 10, 20, 30, 40, 50 };
	cout << my_arr[0] << endl; // 컴파일 시도 강제
	cout << my_arr.at(0) << endl; // at() : member function | 컴파일 시도 후 문제가 있을 시 예외처리
	cout << my_arr.size() << endl; // 5 | 원소 개수
	
	printLength(my_arr); // 5
	printLength_using_ref(my_arr); // 5

	//
	my_arr = { 52, 1, 23, 46, 62 };
	for (auto& element : my_arr) {
		cout << element << " ";
		cout << endl;
	}

	// std::sort 정렬
	std::sort(my_arr.begin(), my_arr.end()); 
	for (auto& element : my_arr) {
		cout << element << " "; // 정렬됨
	}

	cout << endl;

	std::sort(my_arr.rbegin(), my_arr.rend());
	for (auto& element : my_arr) {
		cout << element << " "; // 역순 정렬됨
	}


	return 0;
}