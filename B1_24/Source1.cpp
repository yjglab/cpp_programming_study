#include <iostream>
using namespace std;
// *** call by Address ***

void callByAddress(int* ptr) {
	cout << *ptr << " " << ptr << " " << &ptr << endl;
	*ptr = 6;
}
void func(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << endl;
	}
}
int main3() {
	int val = 5;
	int* ptr_v = &val;
	callByAddress(ptr_v);
	cout << val << endl; // 6

	int arr[] = { 10, 20 };
	func(arr, 2); // 10 20
}