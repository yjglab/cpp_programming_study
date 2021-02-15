#include <iostream>
#include <string>
using namespace std;
// *** const class ��� Ŭ���� ***

class Clss {
public:
	int _value = 0;

	Clss(const Clss& cls_in) // ������ copy constructor
	{
		_value = cls_in._value;
		cout << "Copy Constructor" << endl;
	}
	Clss()
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value) {
		_value = value; // _value�� ���� �����Ϸ� �ϹǷ� �� ��� ������ const�� �ٲ� �� ����
	}
	int getValue() const { // �� ����Լ��� const�� | const�� ���Ƶ� �� �ִ� �Լ��� �ݵ�� �׷��� �� ��(����뿡 ������)
		return _value; // _value�� ���� �����ϴ� ������ ���� ����
	}
};

void print(Clss cls_param) {
	cout << cls_param._value << endl;
}

void print2(const Clss& cls_param2) { // copy constructor�� ȣ����
	cout << &cls_param2 << endl;
	cout << cls_param2.getValue() << endl;
}

class Mycls {
public:
	string _value = "default";
	
	const string& getValue() const {
		cout << "const ver." << endl;
		return _value;
	}
	string& getValue() {
		cout << "Non-const ver." << endl;
		return _value;
	}
	
};
int main2() {
	const Clss cls1; // Constructor
	/*cls1.setValue(3);*/

	// ��� Ŭ������ ��� �Լ��� ������ �� �� ��� �Լ��� const���� �ƴ����� ���� ����/�Ұ���
	cout << cls1.getValue() << endl; // 0
	cout << endl;
	cout << endl;

	Clss cls2; // Constructor
	cout << &cls2 << endl; 

	print2(cls2); 
	// cls_param2�� cls2�� �������� �ϸ鼭 Constructor ���ڿ��� �ѹ� ����ؾ� ������ ��µ��� �ʾ���
	

	// const ������ ���� �����ε� 
	Mycls mycls;
	mycls.getValue() = 10; // Non-const ver.

	const Mycls mycls2;
	mycls2.getValue(); // const ver.
	return 0;
}
