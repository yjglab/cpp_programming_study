#include <iostream>
using namespace std;

// *** 가상 소멸자 ***

class Base1 {
public:
	virtual ~Base1()
	{
		cout << "~Base1() 실행" << endl;
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
		cout << "~Derived1() 실행" << endl;
		delete[] _arr;
	}
};
int main() {
	// 소멸자 호출 순서 : 자식 -> 부모 (생성자의 반대)
	Derived1 d1(5);
	
	//
	Derived1* drv = new Derived1(5);
	Base1* bse = drv;
	delete bse; // memory leak 발생 방지 위해 Base1의 소멸자를 virtual로 설정
	return 0;
}