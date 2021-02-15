#include <iostream>

using namespace std;

class Cents {
private:
	int _cents;

public:
	Cents(int cents)
	{
		_cents = cents;
	}

	int getCents() const {
		return _cents;
	}
};

Cents add(const Cents& c1, const Cents& c2) {
	return Cents(c1.getCents() + c2.getCents()); // �� ���� ���ο� Cents�� �����
}
int main5() {
	cout << add(Cents(6), Cents(8)).getCents() << endl; // 14
	cout << int(6) + int(8) << endl; // 14 | ���缺
	return 0;
}