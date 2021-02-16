#include <iostream>

using namespace std;

// *** ����ȯ(static_cast)�� �����ε� ***

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
	void setCents(int cents) {
		_cents = cents;
	}

	operator int() { // int������ ĳ����
		cout << "cast �Ϸ� " << endl;
		return _cents;
	}
};

class Dollar {
private:
	int _dollars = 0;

public:
	Dollar(const int& input)
		:_dollars(input)
	{
	}

	operator Cents() { // Cents������ ĳ����
		return Cents(_dollars * 100);
	}
};
void printInt(const int& value) {
	cout << value << endl;
}

int main2() {

	Cents c1(7);
	printInt(c1); // 7

	Dollar d1(2);
	Cents c2 = d1;
	printInt(c2); // 200
	 
	return 0;
}