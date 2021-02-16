#include <iostream>

using namespace std;

// *** 형변환(static_cast)을 오버로딩 ***

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

	operator int() { // int형으로 캐스팅
		cout << "cast 완료 " << endl;
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

	operator Cents() { // Cents형으로 캐스팅
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