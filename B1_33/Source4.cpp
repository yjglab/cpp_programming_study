#include <iostream>

using namespace std;

// *** 증감 연산자 오버로딩 ***

class Digit {
private:
	int _digit;
public:
	Digit(int digit = 0)
		: _digit(digit)
	{
		
	}
	// 전위형 prefix
	Digit& operator ++ () {
		++_digit;
		return *this; // 자기자신(Digit&)을 return
	}
	// 후위형 postfix : dummy parameter를 넣어 전위형과 구분함
	Digit operator ++ (int) {
		Digit temp(_digit);
		++(*this);
		return temp; 
	}

	friend ostream& operator << (ostream& out, const Digit& d) {
		out << d._digit;
		return out;
	}
};
int main6() {
	Digit d(5);
	cout << ++d << endl; // 6
	cout << d << endl; // 6

	cout << d++ << endl; // 6
	cout << d << endl; // 7
	
	return 0;
}