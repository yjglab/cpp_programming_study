#include <iostream>
using namespace std;

// *** 상속 받은 함수를 오버라이딩 하기 ***
class Base2 {
protected:
	int _i;

public:
	Base2(int value)
		:_i(value)
	{

	}
	void print() {
		cout << "It is Base2" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Base2& b2) {
		out << "This is base output" << endl;
		return out;
	}

	int getI() {
		return _i;
	}
};

class Derived2 : public Base2 {
private:
	double _d;

public:
	Derived2(int value)
		: Base2(value)
	{
		
	}

	void print() {
		Base2::print(); // It is Base2
		cout << "It is derived2" << endl; // It is Derived2
	}
	
	friend std::ostream& operator << (std::ostream& out, const Derived2& d2) {
		cout << static_cast<Base2>(d2) << endl; // This is base output
		out << "This is derived2 output" << endl; // This is derived2 output
		return out;
	}
};


int main() {
	Base2 b2(5);
	b2.print(); // It is Base2
	cout << b2 << endl; // This is base output

	Derived2 d2(7);
	cout << b2.getI() << " " << d2.getI() << endl; // 5 7
	d2.print(); 
	cout << d2 << endl; 

	return 0;
}