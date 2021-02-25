#include <iostream>
using namespace std;

// *** ���� �Ҹ��� ***

class Base1 {
public:
	virtual ~Base1()
	{
		cout << "~Base1() ����" << endl;
	}
};

class Derived1 : public Base1 {
private:
	int* _arr;

public:
	Derived1(int length)
	{
		_arr = new int[length];
	}
	virtual ~Derived1() override
	{
		cout << "~Derived1() ����" << endl;
		delete[] _arr;
	}
};
int main() {
	// �Ҹ��� ȣ�� ���� : �ڽ� -> �θ� (�������� �ݴ�)
	Derived1 d1(5);
	
	//
	Derived1* drv = new Derived1(5);
	Base1* bse = drv;
	delete bse; // memory leak �߻� ���� ���� Base1�� �Ҹ��ڸ� virtual�� ����
	return 0;
}