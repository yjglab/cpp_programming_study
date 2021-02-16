#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

// *** 비교 연산자 오버로딩 ***

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
		return c1._cents < c2._cents; // c1과 c2중 어느 것이 큰지 결정됨
	} // 왼쪽이 더 작은지를 비교해주는 < 연산자를 사용해야 함
};



int main5() {

	Centss c1(5);
	Centss c2(5);

	if (c1 == c2) {
		cout << "equal" << endl; // 실행
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
		cout << e << " "; // 0~20 셔플된 수 출력
	}
	cout << endl;

	std::sort(begin(arr), end(arr)); // vector array의 크기를 비교할 수 있는 연산자도 오버로딩이 필요함
	for (auto& e : arr) {
		cout << e << " "; // sort된 수 출력
	}
	cout << endl;
	
	return 0;
}