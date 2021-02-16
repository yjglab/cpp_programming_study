#include <iostream>
#include <cassert>
using namespace std;

// *** 복사 생성자, 복사 초기화, RVO return value Optimization ***
class Fraction {
private:
	int _numerator; // 분자
	int _denominator; // 분모

public:
	Fraction(int num = 0, int den = 1)
		: _numerator(num), _denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction& fraction) // copy constructor
		: _numerator(fraction._numerator), _denominator(fraction._denominator)
	{
		cout << "Copy constructor called" << endl;
	} // 보안성 향상을 위해 copy constructor를 private로 옮기는 경우도 있음

	friend std::ostream& operator << (std::ostream& out, const Fraction& f) {
		out << f._numerator << " / " << f._denominator << endl;
		return out;
	}
};

Fraction fracFunc() {
	Fraction temp(1, 2);
	return temp;
}

int main3() {
	Fraction frac(3, 5);
	Fraction frac_copy(frac); // Copy constructor called
	cout << frac << " " << frac_copy << endl; // 3 / 5 \n 3 / 5

	Fraction frac_copy2(Fraction(5, 10)); // 복사 생성자 호출되지 않고 새 class를 생성함
	cout << frac_copy2 << endl; // 5 / 10

	// Release 모드에선 반환값 최적화가 일어나 복사 생성자로 호출되지 않음
	Fraction result = fracFunc(); // Copy constructor called (Debug mode) | copy intialization 함
	cout << result << endl; // 1 / 2

	return 0;
}