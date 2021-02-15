#include <iostream>

using namespace std;

// *** static member variable 정적 멤버 변수 *** 

/* class안에서 static으로 선언된 member변수는 모든 object(instance)들이 공유합니다.
static member variables are shared by all objects of the class. (출처 LearnCPP 11.13)
따라서 st1.s_value = 2; 을 해주더라도 모든 object들의 변수값이 동일하게 2로 변경되는 것 입니다.*/
class cls {
public:
	static int _value; // static member 변수는 .cpp 파일에 정의하는 것이 좋음
	
};

int cls::_value = 1; 

int main3() {
	cout << &cls::_value << " " << cls::_value << endl; // 주소동일 1 | static 변수이므로 생성 전 접근이 가능

	cls cls1;
	cls cls2;
	cls1._value = 2;

	cout << &cls1._value << " " << cls1._value << endl; // 주소동일 2
	cout << &cls2._value << " " << cls2._value << endl; // 주소동일 2

	cls::_value = 1024;
	cout << &cls::_value << " " << cls::_value << endl; // 주소동일 1024

	return 0;
}