#include <iostream>
using namespace std;

int value = 10; 

void func5() {
	// func5()�� ȣ��Ǿ� a�� �����. �ѹ� ����� a�� ��� ���� �޸𸮸� �����ϰ� �ʱ�ȭ�� �ݺ����� ����
	static int a = 1; // static ������ �ʱ�ȭ�� �ݵ�� �ʿ�
	++a;
	cout << a << endl;
}

int main3() {
	// *** �������� global var *** 
	// ( ���������� ���ų� ������ �ܺη� �������� ���� ���� ����. ������ �������� ����� ����)
	
	cout << value << endl; // 10
	int value = 20;
	cout << value << endl; // 20

	cout << ::value << endl; // 10 | �ٸ� ������ ����� value�� ������

	// *** �������� static var *** (�����, �׽��� ������ ����) 
	func5(); // 2
	func5(); // 3

	return 0;
}