#include <iostream>
using namespace std;

// *** ������ scope ***

int a = 1;
void func1() {
	a += 3;
}
void func1(int b) { // parameter �� �ٸ���� �̸��� ���Ƶ� ���� �ٸ� �Լ��� �Ǵ�
	a += 5;
}

//
namespace work1 {
	int x = 1;
	void func2() {
		x += 100;
	}
}

namespace work2 {
	int x = 1;
	void func2() {
		x += 200;
	}
}

//
int main() {
	int apple = 5;
	cout << apple << endl;
	{
		int apple = 1; // ���� �ִ� apple�� ������(namehiding) | ������ �ٸ� �̸����� ������ ����
		cout << apple << endl;
	}
	cout << apple << endl; // 5
	
	// :: => ���� ���� ������ scope resolution operator
	work1::x;
	work1::func2();

	work2::x;
	work2::func2();

	return 0;
}