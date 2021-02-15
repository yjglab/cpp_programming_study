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
	return Cents(c1.getCents() + c2.getCents()); // 두 합을 새로운 Cents의 멤버로
}
int main5() {
	cout << add(Cents(6), Cents(8)).getCents() << endl; // 14
	cout << int(6) + int(8) << endl; // 14 | 유사성
	return 0;
}