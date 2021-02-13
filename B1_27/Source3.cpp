// *** 생성자의 Member Initializer List ***

#include <iostream>
using namespace std;

class B {
private:
	int _b;
public:
	B(const int& _b_in)
		: _b(_b_in) 
	{
	}
};
class Something {
private:
	int _i = 10;
	double _d = 12.2;
	char _c = 'F';
	int _arr[5] = { 50, 51, 52, 53, 54 };
	B _b{ 1024 };

public:
	Something() // 생성자 초기화가 우선 적용함
		: _i{ 1 }, _d{ 3.14 }, _c{ 'a' }, _arr{ 1, 2, 3, 4 ,5 }, _b(_i - 1) 
	{
		_i *= 3; // 최종 적용선
		_d *= 2; // 최종 적용선
		_c += 1; // 최종 적용선
	}

	void print_s() {
		cout << _i << " " << _d << " " << _c << endl;
		for (auto& e : _arr) {
			cout << e << " ";
		}
		cout << endl;
	}
	
	
};
int main5() {
	
	Something some;
	some.print_s(); // 3 6.28 b // 1 2 3 4 5

	return 0;
}