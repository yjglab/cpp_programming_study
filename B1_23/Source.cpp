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
	array<int, 5> my_arr = { 1, 2 ,3 ,4 ,5 }; // ������ �ݵ�� �����ؾ� ��
	
	my_arr = { 10, 20, 30, 40, 50 };
	cout << my_arr[0] << endl; // ������ �õ� ����
	cout << my_arr.at(0) << endl; // at() : member function | ������ �õ� �� ������ ���� �� ����ó��
	cout << my_arr.size() << endl; // 5 | ���� ����
	
	printLength(my_arr); // 5
	printLength_using_ref(my_arr); // 5

	//
	my_arr = { 52, 1, 23, 46, 62 };
	for (auto& element : my_arr) {
		cout << element << " ";
		cout << endl;
	}

	// std::sort ����
	std::sort(my_arr.begin(), my_arr.end()); 
	for (auto& element : my_arr) {
		cout << element << " "; // ���ĵ�
	}

	cout << endl;

	std::sort(my_arr.rbegin(), my_arr.rend());
	for (auto& element : my_arr) {
		cout << element << " "; // ���� ���ĵ�
	}


	return 0;
}