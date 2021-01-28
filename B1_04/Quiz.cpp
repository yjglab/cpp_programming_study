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

// 줄바꿈 시 발생하는 여백은 기본적으로 무시된다.
// indenting : Tab으로 여백을 설정하는 행위.