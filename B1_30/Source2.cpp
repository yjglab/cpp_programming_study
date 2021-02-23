#include <iostream>

using namespace std;

// *** static member function ���� ��� �Լ� *** 

class Cls {
public:

	class _init // inner class
	{
	public:
		_init()
		{
			_value = 977; // inner Ŭ������ ����Ͽ� Ŭ���� ���� static member ������ _value�� ���� �ʱ�ȭ �ϴ� ���� ����
		}
	};
	
private:
	static int _value;
	int _value2;

	static _init _initializer;

public: 
	Cls()
		:_value2(100) /* _value(10)*/ // static member var�� constructor���� �ʱ�ȭ �Ұ��� | C++�� static �����ڴ� ���� �Ұ�
	{
		
	}
	// static member function
	static int getValue() { // Ư�� �ν��Ͻ��� ���� ���� ��� �ν��Ͻ��� ����� �� �ֵ��� ��
		return _value; // �׷��� ������ this �����͸� ����� �� ����
		/* return this->_value2; // ���� this�� ���� ������ ����� ����� �� ����*/
	}

	int temp() { // �Ϲ����� ����Լ� : �ݵ�� Ư�� �ν��Ͻ��� ���ӵ� ���·� ���Ǿ�� ��
		return this->_value;
	}
};

int Cls::_value;
Cls::_init Cls::_initializer; /* Cls::_init _initializer ��� �Է��ص� �۵���..*/

int main() {
	cout << Cls::getValue() << endl; // 1024
	Cls cls1, cls2;
	cout << cls1.getValue() << endl; // 1024

	// non-static func�� �����ͷ� �� �� : Ư�� �ν��Ͻ��� ���ӵ� ���·� ���Ǿ�� ��
	int(Cls:: * fptr1)() = &Cls::temp;
	cout << (cls2.*fptr1)() << endl; // 1024

	// static func�� �����ͷ� �� �� : Ư�� �ν��Ͻ��� ���Ӿ��� ����� �� ����
	int(*fptr2)() = &Cls::getValue;
	cout << fptr2() << endl; // 1024

	
	return 0;
}