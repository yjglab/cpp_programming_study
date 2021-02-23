#include <iostream>

using namespace std;
// *** 상속 ***

class Mother {
/* protected: // private를 유지하되, 자식 class가 접근 가능하도록 함 */
private:
	int _i;

public:
	Mother() // default 생성자를 의도적으로 생성
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

class Child : public Mother { // Mother class의 public 멤버를 상속받음 | Child => derived class
private:
	double _d;
public:
	// Chidl 클래스 Constructor 생성시 Mother Constructor를 같이 호출함
	Child(const int& i_in, const double& d_in) // Child와 Mother의 private 변수를 함께 사용하기 위함
		: Mother(i_in), _d(d_in)
	{
	}
	void setValue(const int& i_in, const double& d_in) {
		Mother::setValue(i_in); // Mother의 setValue를 호출하여 Mother의 _i값을 접근
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