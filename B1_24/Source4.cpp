#include <iostream>
#include <string>

using namespace std;
// *** �Ű����� �⺻�� *** 
// default parameter�� �ִ� �Լ��� header���� ��� �̹� ����� ���
// ���ǿ����� default parameter�� �Է��ϸ� �ȵ�

void pnt3(int x = 2) { // default parameter �Ű����� �⺻��
	cout << x << endl;
}
void pnt4(int x = 1, int y = 2, int z = 3) { 
	cout << x << " " << y << " " << z << endl;
}
void pnt5(int x = 1); // if in header ...
void pnt5(int x) { }

void func(std::string str) {}
void func(char ch = ' ') {}

void pnt6(int x) {}
void pnt6(int x, int y) {}

int main() {
	
	pnt3(10); // 10
	pnt3(); // 2
	pnt4(1000); // 1000 2 3

	//
	func(); // char param�� ���� func�� �����ε�(��ĭ�� parameter�� ����)

	//
	pnt6(10); // ù��° pnt6�� �����ε� | �ι��� pnt6�� parameter y�� default�� �ִ� ��� pnt6(10) => �����ε� �Ұ�

	return 0;
}