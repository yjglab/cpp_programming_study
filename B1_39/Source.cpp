#include <iostream>

using namespace std;
// *** 유도된 클래스 들의 생성 순서 ***

class Mother {
public:
	int _i;
	
	Mother(const int& i_in = 0)
		: _i(i_in)
	{
		cout << "Mother Construction " << endl;
	}
};

class Child : public Mother {
public:
	double _d;

public:
	Child() 
		: Mother(100), _d(1.0) // Mother() 생성 문구는 기본적으로 숨겨져 있음
	{
		_i = 200; // Mother 생성자 초기화 완료후 접근 가능
		cout << "Child Construction " << endl;
	}
};
int main() {
	// 생성자 호출 순서 : Mother -> Child
	Child c1;
	return 0;
}