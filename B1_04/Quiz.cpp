#include <iostream>

using namespace std;

int doSomething(int x) {
	x = 123;
	cout << x << endl;

	return x;
}

int main_2() {
	int x = 0;

	cout << x << endl;
	doSomething(x);
	cout << x << endl;

	return 0;
}

// �ٹٲ� �� �߻��ϴ� ������ �⺻������ ���õȴ�.
// indenting : Tab���� ������ �����ϴ� ����.