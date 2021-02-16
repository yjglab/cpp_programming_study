#include <iostream>
#include <cassert>
using namespace std;

// *** 변환 생성자, explicit, delete ***

class Fractions {
private:
	int _numerator; 
	int _denominator;

public:
	Fractions(char) = delete;

	explicit Fractions(int num = 0, int den = 1)
		: _numerator(num), _denominator(den)
	{
		assert(den != 0);
	}

	Fractions(const Fractions& fractions) // copy constructor
		: _numerator(fractions._numerator), _denominator(fractions._denominator)
	{
		cout << "Copy constructor called" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Fractions& f) {
		out << f._numerator << " / " << f._denominator << endl;
		return out;
	}
};

void fracFunc(Fractions frac) {
	cout << frac << endl;
}

int main4() {
	Fractions f1(7);
	fracFunc(f1); // 7 / 1
	fracFunc(Fractions(7)); // 7 / 1
	/* fracFunc(7); // 이 형식은 explicit에 의해 막힘 | 엄격성 | 자동 캐스팅에 의한 오류 방지 */ 

	//
	/* Fractions f2('c'); // 이 형식은 delete에 의해 막힘 | 엄격성 | 자동 캐스팅에 의한 오류 방지*/
	return 0;
}