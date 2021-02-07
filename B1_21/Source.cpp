#include <iostream>

using namespace std;
// *** �޸� ���� �Ҵ� ***

int main2() {
	
	// new int : int����� ���缭 os�κ��� �޸𸮸� �ް� �� �޸� �ּҸ� ����
	int* ptr = new int{ 7 };
	

	cout << ptr << endl; // �ּ�
	cout << *ptr << endl; // 7

	delete ptr; // os�� �޸𸮸� ������
	
	ptr = nullptr;
	if (ptr != nullptr) { // == if(ptr) | �ǹ̰� ���������� �����ϵ���
		cout << ptr << endl; // �̽���
		cout << *ptr << endl; // �̽���
	}
	else {
		cout << "could not allocate memory"; // ����
	}
	
	// std::nothrow => � ��쿡�� �������� �ʰ� ��� ���� (���� ó�� ����)
	int* ptr2 = new (std::nothrow)int{ 10 };
	int* ptr3 = ptr2;

	delete ptr2;
	ptr2 = nullptr;
	ptr3 = nullptr; // �Ĳ��� ���α׷���

	// �޸� ���� memory leak
	// task manager���� � ���α׷��� �޸𸮰� ��� �����ϸ� �� ���α׷� �� �޸𸮰� ����
	while (1) {
		int* ptr_a = new int; // ��û�� ���α׷���
		cout << ptr_a << endl;
			
		delete ptr_a; // ���� �޸𸮰� ���� ����
	}

	// * new�� delete�� ���� ����ϴ� ���� ����


	return 0;
}
