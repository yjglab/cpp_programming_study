// *** Constructor 생성자 ***
// 외부에서 호출하기 위해 사용하는 것이 아님
// class에는 기본적으로 아무 값도 없는 default 생성자가 숨겨져 있음

#include <iostream>
using namespace std;

class Fraction {
private:
	int _numerator; // 분자
	int _denominator; // 분모

public:
	// default parameter를 입력해두어 parameter가 2개인 경우, 1개인 경우, 없는 경우를 모두 다루는 생성자
	Fraction(const int& num_in = 1, const int& den_in = 1) { // Constructor : class와 이름이 같고 반환값이 없음
		_numerator = num_in;
		_denominator = den_in;
	}

	void print() {
		cout << _numerator << " / " << _denominator << endl;
	}
};

class Second {
public:
	Second() {
		cout << "class Second constructor()" << endl;
	}
};

class First {
	Second snd;

public:
	First() {
		cout << "class First constructor()" << endl;
	}
};
int main4() {
	// 생성자의 parameter가 없을 경우 () 뺌 | constructor() 로 일반함수와 헷갈릴 수 있으므로 
	// frac class가 생성될때 내부적으로 그 안에 있던 생성자를 실행함
	Fraction frac(1, 3);
	frac.print(); // 1 / 3

	// 생성자를 하나 이상 선언한 경우 default 생성자는 생성되지 않음
	// parameter가 없는 생성자를 선언하고자 할때는 ()는 입력하지 않음
	Fraction frac2;

	//
	Fraction one_thirds_1 = Fraction{ 1, 3 }; // 권장X
	Fraction one_thirds_2{ 1, 3 }; // 권장O

	// uniform initialization은 자동 형변환을 허용하지 않음 (엄격성)
	/* Fraction one_thirds2{ 1.0, 3 }; */
	Fraction one_thirds2( 1.0, 3 );

	//
	First fst; // (1)멤버 변수인 snd 선언 (2)선언과 동시에 Second 생성자 생성 및 선언 (3)First 생성자 생성 및 선언

	
	return 0;
}