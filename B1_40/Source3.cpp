#include <iostream>
using namespace std;

// *** 가상 함수 virtual와 다형성 ***
class A {
public:
	void print() {
		cout << "A" << endl;
	}
};

class B : public A {
public:
	virtual void print() { // virtual : B를 상속받은 인스턴스(C)가 B의 함수와 오버라이딩 되는 경우 C의 함수로 사용할 수 있게함
		cout << "B" << endl;
	}
};

class C : public B {
public:
	void print() {
		cout << "C" << endl;
	}
};

class D : public C {
public:
	void print() {
		cout << "D" << endl; // 최상위 클래스 A의 형식에 따라 D의 print() 함수의 return type등의 형식을 바꿀 수 없음
	}
};

int main5() {
	A a;
	B b;
	C c;
	D d;

	//
	A& ref_A = b;
	B& ref_B = c;
	B& ref_B2 = d;
	ref_A.print(); // A
	ref_B.print(); // C | B의 함수가 virtual이므로 C의 함수로 오버라이딩 되었음
	ref_B2.print(); // D | 위와 같은 원리
	C& ref_C = d;
	ref_C.print(); // D | 상속을 타고 올라가 상위 클래스의 함수가 virtual인 경우, 그 함수를 상속받는 모든 클래스의 동일 함수들도 virtual이 된다
	
	/* 빠른 호출이 요구되는 게임 엔진, 실시간 챗, 가상 현실 등의 프로그래밍에는
	virtual의 사용이 권장되지 않음 */

	return 0;
}