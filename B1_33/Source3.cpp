#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

// *** �� ������ �����ε� ***

class Centss {
private:
	int _cents;

public:

	Centss(int cents = 0) {
		_cents = cents;
	}
	int getCents() const {
		return _cents;
	}
	int& getCents() {
		return _cents;
	}

	Centss operator - () const {
		return Centss(-_cents);
	}

	friend bool operator == (const Centss& c1, const Centss& c2) {
		return c1._cents == c2._cents;
	}

	friend bool operator != (const Centss& c1, const Centss& c2) {
		return c1._cents != c2._cents;
	}

	friend std::ostream& operator << (std::ostream& out, const Centss& cents) {
		out << cents._cents;
		return out;
	}

	friend bool operator < (const Centss& c1, const Centss& c2) {
		return c1._cents < c2._cents; // c1�� c2�� ��� ���� ū�� ������
	} // ������ �� �������� �����ִ� < �����ڸ� ����ؾ� ��
};



int main5() {

	Centss c1(5);
	Centss c2(5);

	if (c1 == c2) {
		cout << "equal" << endl; // ����
	}

	//
	vector<Centss> arr(20);
	for (unsigned i = 0; i < 20; ++i) {
		arr[i].getCents() = i;
	}
	std::random_device rd;
	std::mt19937 generator(rd());
	std::shuffle(arr.begin(), arr.end(), generator);

	for (auto& e : arr) {
		cout << e << " "; // 0~20 ���õ� �� ���
	}
	cout << endl;

	std::sort(begin(arr), end(arr)); // vector array�� ũ�⸦ ���� �� �ִ� �����ڵ� �����ε��� �ʿ���
	for (auto& e : arr) {
		cout << e << " "; // sort�� �� ���
	}
	cout << endl;
	
	return 0;
}