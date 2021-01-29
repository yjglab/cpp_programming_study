#include <iostream>

bool isEqual(int a, int b) {
	bool result = (a == b);

	return result;
}

int main() {
	using namespace std;

	// *** Boolean Datatype
	bool b1 = true;
	bool b2(false);
	bool b3{ true };
	b3 = false;

	cout << std::boolalpha;
	cout << b1 << endl; // true
	cout << b3 << endl; // false
	cout << !b3 << endl; // true

	cout << std::noboolalpha;
	cout << b1 << endl; // 1
	cout << b3 << endl; // 0

	// and operator
	cout << (true && true) << endl; // 1
	cout << (true && false) << endl; // 0
	cout << (false && false) << endl; // 0

	// or operator
	cout << (true || true) << endl; // 1
	cout << (true || false) << endl; // 1
	cout << (false || false) << endl; // 0

	// if
	if (true) {
		cout << "TRUE" << endl;
	}
	else {
		cout << "FALSE" << endl;
	}
	
	cout << isEqual(1, 1) << endl; // 1
	cout << isEqual(0, 1) << endl; // 0

	//
	cout << std::boolalpha;
	bool b5;
	cin >> b5;
	cout << "Your Input : " << b5 << endl; // 0: false | 그 외 모든: true 출력 | 이 구문은 컴파일러마다 다를 수 있음

	return 0;
}