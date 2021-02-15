#include <iostream>

using namespace std;

// *** static member variable ���� ��� ���� *** 

/* class�ȿ��� static���� ����� member������ ��� object(instance)���� �����մϴ�.
static member variables are shared by all objects of the class. (��ó LearnCPP 11.13)
���� st1.s_value = 2; �� ���ִ��� ��� object���� �������� �����ϰ� 2�� ����Ǵ� �� �Դϴ�.*/
class Clsss {
public:
	static int _value; // static member ������ .cpp ���Ͽ� �����ϴ� ���� ����
	
};

int Clsss::_value = 1; 

int main3() {
	cout << &Clsss::_value << " " << Clsss::_value << endl; // �ּҵ��� 1 | static �����̹Ƿ� ���� �� ������ ����

	Clsss cls1;
	Clsss cls2;
	cls1._value = 2;

	cout << &cls1._value << " " << cls1._value << endl; // �ּҵ��� 2
	cout << &cls2._value << " " << cls2._value << endl; // �ּҵ��� 2

	Clsss::_value = 1024;
	cout << &Clsss::_value << " " << Clsss::_value << endl; // �ּҵ��� 1024

	return 0;
}