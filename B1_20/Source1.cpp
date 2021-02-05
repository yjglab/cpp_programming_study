#include <iostream>
#include <cstddef>

using namespace std;
// *** null pointer ***

void func(double* ptr) {

	cout << "address of pointer variable in func()" << &ptr << endl;

	if (ptr != nullptr) {
		// do something
		cout << *ptr << endl;
	}
	else {
		// do nothing
		cout << "Null ptr, do nothing" << endl;
	}
}
int main3() {

	double* ptr = nullptr; // modern c++ style | c-style������ 0�̳� NULL�� �־���
	func(ptr); // Null ptr, do nothing
	func(nullptr); // Null ptr, do nothing

	double d = 123.4;
	func(&d); // 123.4

	ptr = &d;
	func(ptr); // 123.4

	// ������ ������ �Լ��� parameter�� �Ѱ����� �װ����� �����ǵȴ�. (�ּҵ� �ٲ�)
	cout << "address of pointer variable in main()" << &ptr << endl;
	
	//
	std::nullptr_t nptr; // parameter �� �ݵ�� nullptr�� �޴� ��� ���


	return 0;
}