#include <iostream>
using namespace std;

// *** this 포인터와 연쇄 호출(chaining member function) ***
class cls1 {
private:
	int _id;

public:
	cls1(int id)
	{
		this->setId(id); // this-> 는 기본적으로 숨겨져 있음 | 현재 주소를 갖고 있는 인스턴스에서 setId() 함수를 사용한다는 의미
		this->_id; // this-> 는 입력하지 않아도 됨
		cout << this << endl; // 자신 class의 주소 호출
	}
	void setId(int id) {
		_id = id;
	}
	int getId() {
		return _id;
	}
};

class Calc {
private:
	int _value;
public:
	Calc(int init_value)
		:_value(init_value)
	{

	}
	Calc& add(int value) {
		_value += value;
		return *this;
	}
	Calc& sub(int value) {
		_value -= value;
		return *this;
	}
	Calc& mul(int value) {
		_value *= value;
		return *this;
	}
	Calc& div(int value) {
		_value /= value;
		return *this;
	}
	void print() {
		cout << _value << endl;
	}
};
int main3() {
	cls1 c1(1), c2(2);
	c1.setId(2);
	c2.setId(3);

	cout << &c1 << " " << &c2 << endl;

	//
	Calc cal(10);
	cal.add(4);
	cal.sub(2);
	cal.mul(2);
	cal.div(2);
	cal.print(); // 12
	
	// class Calc 자신이 return되었으므로 재호출 가능 
	// C++에서 실용성은 그다지
	Calc cal2(10);
	cal2.add(4).sub(2).mul(2).div(2).print(); // 12
	
	return 0;
}