#include <iostream>

using namespace std;

// *** static member variable ���� ��� ���� *** 

/* class�ȿ��� static���� ����� member������ ��� object(instance)���� �����մϴ�.
static member variables are shared by all objects of the class. (��ó LearnCPP 11.13)
���� st1.s_value = 2; �� ���ִ��� ��� object���� �������� �����ϰ� 2�� ����Ǵ� �� �Դϴ�.*/
class cls {
public:
	static int _value; // static member ������ .cpp ���Ͽ� �����ϴ� ���� ����
	
};

int cls::_value = 1; 

int main3() {
	cout << &cls::_value << " " << cls::_value << endl; // �ּҵ��� 1 | static �����̹Ƿ� ���� �� ������ ����

	cls cls1;
	cls cls2;
	cls1._value = 2;

	cout << &cls1._value << " " << cls1._value << endl; // �ּҵ��� 2
	cout << &cls2._value << " " << cls2._value << endl; // �ּҵ��� 2

	cls::_value = 1024;
	cout << &cls::_value << " " << cls::_value << endl; // �ּҵ��� 1024

	return 0;
}