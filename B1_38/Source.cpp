#include <iostream>

using namespace std;
// *** ��� ***

class Mother {
/* protected: // private�� �����ϵ�, �ڽ� class�� ���� �����ϵ��� �� */
private:
	int _i;

public:
	Mother() // default �����ڸ� �ǵ������� ����
		: _i(0)
	{

	}
	Mother(const int& i_in)
		: _i(i_in)
	{
		cout << "Mother Contructor used" << endl;
	}
	void setValue(const int& i_in) {
		_i = i_in;
	}
	int getValue() {
		return _i;
	}

};

class Child : public Mother { // Mother class�� public ����� ��ӹ��� | Child => derived class
private:
	double _d;
public:
	// Chidl Ŭ���� Constructor ������ Mother Constructor�� ���� ȣ����
	Child(const int& i_in, const double& d_in) // Child�� Mother�� private ������ �Բ� ����ϱ� ����
		: Mother(i_in), _d(d_in)
	{
	}
	void setValue(const int& i_in, const double& d_in) {
		Mother::setValue(i_in); // Mother�� setValue�� ȣ���Ͽ� Mother�� _i���� ����
		_d = d_in;
	}
	void setValue(const double& d_in) {
		_d = d_in;
	}

	double getValue() {
		return _d;
	}
};

int main2() {
	Mother mother(222); // Mother Constructer used
	/* mother.setValue(1024); ok  */
	cout << mother.getValue() << endl; // 222

	Child child(555, 888); // Mother Constructer used
	/* child.setValue(128, 2); ok
	child.Mother::setValue(5000); ok	*/
	cout << child.Mother::getValue() << endl; /// 555
	cout << child.getValue() << endl; // 888
	return 0;
}