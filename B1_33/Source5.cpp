#include <iostream>
#include <cassert>
using namespace std;

// *** 첨자 연산자 [] 오버로딩 ***
class IntList {
private:
	int _list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

public:
	int& operator [] (const int index) {
		assert(index >= 0); // if문보다는 assert를 권장
		assert(index < 10);
		return _list[index]; 
	}
	const int& operator [] (const int index) const {
		assert(index >= 0);
		assert(index < 10);
		return _list[index];
	}
	/*
	void setItem(int index, int value) {
		_list[index] = value;
	}
	int getItem(int index) {
		return _list[index];
	}
	int* getList() {
		return _list;
	}
	*/
};
int main7() {
	IntList list;
	list[3] = 10;
	cout << list[3] << endl; // 10

	IntList list_c;
	
	cout << list_c[3] << endl; // 4

	/*
	IntList list;
	list.setItem(3, 1);
	cout << list.getItem(3) << endl; // 1

	list.getList()[3] = 10;
	cout << list.getList()[3] << endl; // 10
	*/

	//
	IntList* list_p = new IntList;
	(*list_p)[3] = 50;
	
	return 0;
}