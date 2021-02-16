#include <iostream>
#include <cassert>
using namespace std;

// *** ��ȯ ������, explicit, delete ***

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
	/* fracFunc(7); // �� ������ explicit�� ���� ���� | ���ݼ� | �ڵ� ĳ���ÿ� ���� ���� ���� */ 

	//
	/* Fractions f2('c'); // �� ������ delete�� ���� ���� | ���ݼ� | �ڵ� ĳ���ÿ� ���� ���� ����*/
	return 0;
}