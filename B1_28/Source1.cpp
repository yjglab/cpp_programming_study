#include <iostream>
using namespace std;

// *** this �����Ϳ� ���� ȣ��(chaining member function) ***
class cls1 {
private:
	int _id;

public:
	cls1(int id)
	{
		this->setId(id); // this-> �� �⺻������ ������ ���� | ���� �ּҸ� ���� �ִ� �ν��Ͻ����� setId() �Լ��� ����Ѵٴ� �ǹ�
		this->_id; // this-> �� �Է����� �ʾƵ� ��
		cout << this << endl; // �ڽ� class�� �ּ� ȣ��
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
	
	// class Calc �ڽ��� return�Ǿ����Ƿ� ��ȣ�� ���� 
	// C++���� �ǿ뼺�� �״���
	Calc cal2(10);
	cal2.add(4).sub(2).mul(2).div(2).print(); // 12
	
	return 0;
}