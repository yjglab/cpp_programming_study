#include <iostream>
#include <cassert>
using namespace std;

// *** ���� ������, ���� �ʱ�ȭ, RVO return value Optimization ***
class Fraction {
private:
	int _numerator; // ����
	int _denominator; // �и�

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
	} // ���ȼ� ����� ���� copy constructor�� private�� �ű�� ��쵵 ����

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

	Fraction frac_copy2(Fraction(5, 10)); // ���� ������ ȣ����� �ʰ� �� class�� ������
	cout << frac_copy2 << endl; // 5 / 10

	// Release ��忡�� ��ȯ�� ����ȭ�� �Ͼ ���� �����ڷ� ȣ����� ����
	Fraction result = fracFunc(); // Copy constructor called (Debug mode) | copy intialization ��
	cout << result << endl; // 1 / 2

	return 0;
}