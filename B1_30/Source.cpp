#include <iostream>
#include <string>
using namespace std;
// *** const class 상수 클래스 ***

class Clss {
public:
	int _value = 0;

	Clss(const Clss& cls_in) // 숨겨진 copy constructor
	{
		_value = cls_in._value;
		cout << "Copy Constructor" << endl;
	}
	Clss()
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value) {
		_value = value; // _value의 값을 변경하려 하므로 이 멤버 변수는 const로 바꿀 수 없음
	}
	int getValue() const { // 이 멤버함수는 const임 | const로 막아둘 수 있는 함수는 반드시 그렇게 할 것(디버깅에 유리함)
		return _value; // _value의 값을 변경하는 행위를 하지 않음
	}
};

void print(Clss cls_param) {
	cout << cls_param._value << endl;
}

void print2(const Clss& cls_param2) { // copy constructor를 호출함
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

	// 상수 클래스의 멤버 함수에 접근할 때 그 멤버 함수가 const인지 아닌지로 접근 가능/불가능
	cout << cls1.getValue() << endl; // 0
	cout << endl;
	cout << endl;

	Clss cls2; // Constructor
	cout << &cls2 << endl; 

	print2(cls2); 
	// cls_param2로 cls2를 복제선언 하면서 Constructor 문자열을 한번 출력해야 하지만 출력되지 않았음
	

	// const 유무에 따라 오버로딩 
	Mycls mycls;
	mycls.getValue() = 10; // Non-const ver.

	const Mycls mycls2;
	mycls2.getValue(); // const ver.
	return 0;
}
