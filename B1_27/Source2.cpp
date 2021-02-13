// *** Constructor ������ ***
// �ܺο��� ȣ���ϱ� ���� ����ϴ� ���� �ƴ�
// class���� �⺻������ �ƹ� ���� ���� default �����ڰ� ������ ����

#include <iostream>
using namespace std;

class Fraction {
private:
	int _numerator; // ����
	int _denominator; // �и�

public:
	// default parameter�� �Է��صξ� parameter�� 2���� ���, 1���� ���, ���� ��츦 ��� �ٷ�� ������
	Fraction(const int& num_in = 1, const int& den_in = 1) { // Constructor : class�� �̸��� ���� ��ȯ���� ����
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
	// �������� parameter�� ���� ��� () �� | constructor() �� �Ϲ��Լ��� �򰥸� �� �����Ƿ� 
	// frac class�� �����ɶ� ���������� �� �ȿ� �ִ� �����ڸ� ������
	Fraction frac(1, 3);
	frac.print(); // 1 / 3

	// �����ڸ� �ϳ� �̻� ������ ��� default �����ڴ� �������� ����
	// parameter�� ���� �����ڸ� �����ϰ��� �Ҷ��� ()�� �Է����� ����
	Fraction frac2;

	//
	Fraction one_thirds_1 = Fraction{ 1, 3 }; // ����X
	Fraction one_thirds_2{ 1, 3 }; // ����O

	// uniform initialization�� �ڵ� ����ȯ�� ������� ���� (���ݼ�)
	/* Fraction one_thirds2{ 1.0, 3 }; */
	Fraction one_thirds2( 1.0, 3 );

	//
	First fst; // (1)��� ������ snd ���� (2)����� ���ÿ� Second ������ ���� �� ���� (3)First ������ ���� �� ����

	
	return 0;
}