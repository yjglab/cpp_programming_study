#include <iostream>
using namespace std;

// *** ������ �����ε� ***
// ����
// ? :, ::, sizeof, ., .* �� �����ε� �Ұ���
// ^ �� �켱������ �ſ쳷�� �����ε� ���� �ʴ� ���� ����
// =, [], (), -> �� ����θ� �����ε� ����

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

	friend Cents operator + (const Cents& c1, const Cents& c2) { // add�Լ��� ����� ���� ���� ��ü��
		return Cents(c1.getCents() + c2.getCents());
	}

	Cents operator + (const Cents& c2) { // add�Լ��� ����� ���� ���� ��ü��
		return Cents(this->_cents + c2._cents);
	}
};



int main2() {
	Cents c1(6);
	Cents c2(8);

	cout << (c1 + c2 + Cents(6)).getCents() << endl; // 20 | ������ �����ε�
	

	return 0;
}