#include <iostream>
using namespace std;

// *** 연산자 오버로딩 ***
// 참고
// ? :, ::, sizeof, ., .* 는 오버로딩 불가능
// ^ 는 우선순위가 매우낮아 오버로딩 하지 않는 것이 좋다
// =, [], (), -> 는 멤버로만 오버로딩 가능

class Cents {
private:
	int _cents;

public:
	
	Cents(int cents = 0) {
		_cents = cents;
	}
	int getCents() const {
		return _cents;
	}
	int& getCents() {
		return _cents;
	}

	friend Cents operator + (const Cents& c1, const Cents& c2) { // add함수로 만들어 쓰는 것을 대체함
		return Cents(c1.getCents() + c2.getCents());
	}

	Cents operator + (const Cents& c2) { // add함수로 만들어 쓰는 것을 대체함
		return Cents(this->_cents + c2._cents);
	}
};



int main2() {
	Cents c1(6);
	Cents c2(8);

	cout << (c1 + c2 + Cents(6)).getCents() << endl; // 20 | 연산자 오버로딩
	

	return 0;
}