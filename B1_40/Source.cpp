#include <iostream>
using namespace std;

// *** ��� ���� �Լ��� �������̵� �ϱ� ***
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

	using Base2::_i; // _i�� Derived2 �ȿ��� public���� ����� | �ܺο��� ���� ��������

private:
	using Base2::print; // ��ӹ��� print()�� �ܺο��� ����� �� ���Ե�(���1) | () �Է����� �� ��
	void print() = delete; // ��ӹ��� print()�� �ܺο��� ����� �� ���Ե�(���2)
}; 


int main2() {
	Derived2 d2(1);
	// d2._i = 10; err | �⺻�����δ� Derived2�� _i�� ��� �޾����� �ܺο����� ����� �� ����
	d2._i = 10; // using Base2::_i �� ���� ���� ��������

	// d2.print(); err
	return 0;
}