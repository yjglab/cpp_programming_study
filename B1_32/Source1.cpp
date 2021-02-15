#include <iostream>

using namespace std;
// *** friend function 친구함수와 class ***

class A2; 

class B2 {
private:
	int _value = 2;

public:
	void func(A2& a2);
};

class A2 {
private:
	int _value = 1;

	// friend class B2;
	friend void B2::func(A2& a2); // class A2 전체를 개방하지 않고 B2의 func함수에게만 개방함
};

void B2::func(A2& a2) {
	cout << a2._value << endl;
}

int main3() {
	A2 a2;
	B2 b2;
	
	b2.func(a2); // 1

	return 0;
}