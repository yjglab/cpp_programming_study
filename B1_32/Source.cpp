#include <iostream>

using namespace std;

class B; // forward declaration

class A {
private:
	int _value = 1;

	friend void func(A& a, B& b); // private 멤버 변수를 친구 함수인 func가 접근 가능하도록 함
};

class B {
private:
	int _value = 2;

	friend void func(A& a, B& b);
};
void func(A& a, B& b) {
	cout << a._value << " " << b._value << endl;
}

int main2() {
	A a;
	B b;
	func(a, b); // 1 2

	
	return 0;
}