#include <iostream>
using namespace std;

// *** 스코프 scope ***

int a = 1;
void func1() {
	a += 3;
}
void func1(int b) { // parameter 가 다른경우 이름이 같아도 서로 다른 함수로 판단
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
		int apple = 1; // 위에 있는 apple은 숨겨짐(namehiding) | 가급적 다른 이름으로 변수명 짓기
		cout << apple << endl;
	}
	cout << apple << endl; // 5
	
	// :: => 영역 결정 연산자 scope resolution operator
	work1::x;
	work1::func2();

	work2::x;
	work2::func2();

	return 0;
}