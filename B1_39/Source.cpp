#include <iostream>

using namespace std;
// *** ������ Ŭ���� ���� ���� ���� ***

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
		: Mother(100), _d(1.0) // Mother() ���� ������ �⺻������ ������ ����
	{
		_i = 200; // Mother ������ �ʱ�ȭ �Ϸ��� ���� ����
		cout << "Child Construction " << endl;
	}
};
int main2() {
	// ������ ȣ�� ���� : Mother -> Child
	Child c1;

	//
	cout << sizeof(Mother) << endl; // 4
	cout << sizeof(Child) << endl; // 16 | padding

	return 0;
}