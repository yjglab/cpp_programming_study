#include <iostream>

using namespace std;

// *** 괄호 연산자 () 오버로딩과 함수 객체 ***

class Accumulator {
private:
	int _counter = 0;

public:
	int operator()(int i) {
		return (_counter += i);
	}
};

int main() {

	Accumulator acc;
	cout << acc(10) << endl; // 10
	cout << acc(20) << endl; // 30

	return 0;
}