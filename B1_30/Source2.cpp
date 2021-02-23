#include <iostream>

using namespace std;

// *** static member function 정적 멤버 함수 *** 

class Cls {
public:

	class _init // inner class
	{
	public:
		_init()
		{
			_value = 977; // inner 클래스를 사용하여 클래스 안의 static member 변수인 _value의 값을 초기화 하는 것을 구현
		}
	};
	
private:
	static int _value;
	int _value2;

	static _init _initializer;

public: 
	Cls()
		:_value2(100) /* _value(10)*/ // static member var는 constructor에서 초기화 불가능 | C++는 static 생성자는 생성 불가
	{
		
	}
	// static member function
	static int getValue() { // 특정 인스턴스에 관계 없이 모든 인스턴스가 사용할 수 있도록 함
		return _value; // 그렇기 때문에 this 포인터를 사용할 수 없음
		/* return this->_value2; // 또한 this로 접근 가능한 방식은 사용할 수 없음*/
	}

	int temp() { // 일반적인 멤버함수 : 반드시 특정 인스턴스에 종속된 형태로 사용되어야 함
		return this->_value;
	}
};

int Cls::_value;
Cls::_init Cls::_initializer; /* Cls::_init _initializer 라고 입력해도 작동됨..*/

int main() {
	cout << Cls::getValue() << endl; // 1024
	Cls cls1, cls2;
	cout << cls1.getValue() << endl; // 1024

	// non-static func를 포인터로 쓸 때 : 특정 인스턴스에 종속된 형태로 사용되어야 함
	int(Cls:: * fptr1)() = &Cls::temp;
	cout << (cls2.*fptr1)() << endl; // 1024

	// static func를 포인터로 쓸 때 : 특정 인스턴스의 종속없이 사용할 수 있음
	int(*fptr2)() = &Cls::getValue;
	cout << fptr2() << endl; // 1024

	
	return 0;
}