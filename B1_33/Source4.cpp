#include <iostream>

using namespace std;

// *** ���� ������ �����ε� ***

class Digit {
private:
	int _digit;
public:
	Digit(int digit = 0)
		: _digit(digit)
	{
		
	}
	// ������ prefix
	Digit& operator ++ () {
		++_digit;
		return *this; // �ڱ��ڽ�(Digit&)�� return
	}
	// ������ postfix : dummy parameter�� �־� �������� ������
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