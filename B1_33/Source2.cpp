#include <iostream>
using namespace std;

// *** 단항 연산자 오버로딩 ***

class Centts {
private:
	int _cents;
	
public:

	Centts(int cents = 0) {
		_cents = cents;
	}
	int getCents() const {
		return _cents;
	}
	int& getCents() {
		return _cents;
	}

	Centts operator - () const {
		return Centts(-_cents);
	}

	bool operator ! () const { // 의도에 따라 출력 값을 바꾸면 된다
		return (_cents == 0) ? true : false;
	}
	friend std::ostream& operator << (std::ostream& out, const Centts& cents) {
		out << cents._cents;
		return out;
	}
};



int main4() {
	Centts c1(6);
	Centts c2(0);
	
	cout << c1 << endl; // 6
	cout << -c1 << endl; // 6
	cout << -Centts(-10) << endl; // 10

	//
	auto temp = !c1;

	cout << !c1 << " " << c2 << endl; // 0 1 | c1은 0이 아니므로 0, c2는 0이므로 1
	return 0;
}