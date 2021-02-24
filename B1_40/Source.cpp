#include <iostream>
using namespace std;

// *** 상속 받은 함수를 오버라이딩 하기 ***
class Base2 {
protected:
	int _i;

public:
	Base2(int value)
		:_i(value)
	{

	}
	void print() {
		cout << "It is Base2" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Base2& b2) {
		out << "This is base output" << endl;
		return out;
	}
};

class Derived2 : public Base2 {
private:
	double _d;

public:
	Derived2(int value)
		: Base2(value)
	{
		
	}

	using Base2::_i; // _i가 Derived2 안에서 public으로 변경됨 | 외부에서 접근 가능해짐

private:
	using Base2::print; // 상속받은 print()를 외부에서 사용할 수 없게됨(방법1) | () 입력하지 말 것
	void print() = delete; // 상속받은 print()를 외부에서 사용할 수 없게됨(방법2)
}; 


int main2() {
	Derived2 d2(1);
	// d2._i = 10; err | 기본적으로는 Derived2가 _i를 상속 받았지만 외부에서는 사용할 수 없음
	d2._i = 10; // using Base2::_i 를 통해 접근 가능해짐

	// d2.print(); err
	return 0;
}