#include <iostream>
using namespace std;

// *** ���� ������ �����ε� ***

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

	bool operator ! () const { // �ǵ��� ���� ��� ���� �ٲٸ� �ȴ�
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

	cout << !c1 << " " << c2 << endl; // 0 1 | c1�� 0�� �ƴϹǷ� 0, c2�� 0�̹Ƿ� 1
	return 0;
}