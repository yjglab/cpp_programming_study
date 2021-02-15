#include <iostream>

using namespace std;

// *** 劳疙 按眉 ***

class C {
public:
	C() 
	{
		cout << "Constructor" << endl;
	}
	~C()
	{
		cout << "Destructor" << endl;
	}
	
	void print() {
		cout << "Hello" << endl;
	}
};

class D {
public:
	int _value;

	D(const int& input)
		: _value(input)
	{
		
	}
	
	void printDouble() {
		cout << _value * 2 << endl;
	}
};

int main4() {
	C cls;
	cls.print();
	cls.print();
	/* Output
	Constructor
	Hello
	Hello
	Destructor
	*/

	cout << endl;

	C().print(); // 劳疙 按眉
	C().print();
	/* Output
	Constructor
	Hello
	Destructor
	Constructor
	Hello
	Destructor
	*/
	cout << endl;
	//
	D d(1);
	d.printDouble(); // 2

	D(1).printDouble(); // 2

	return 0;
}