#include <iostream>
#include <string>

using namespace std;

// *** ���� ���� �Լ� pure virtual function ***
class Animal {
protected:
	string _name;

public:
	Animal(std::string name)
		: _name(name)
	{}

public:
	string getName() {
		return _name;
	}
	virtual void speak() const = 0; // pure virtual function
};

/* pure virtual function�� body�� ������ ������ �� ������ �� �ʿ䰡 ����
void Animal::speak() const {
	cout << _name << " ??? " << endl;
}
*/
class Cat : public Animal {
public:
	Cat(string name)
		: Animal(name)
	{}
	void speak() const {
		cout << _name << " Meow " << endl;
	}
};

class Dog : public Animal {
public:
	Dog(string name) 
		:Animal(name) 
	{}

	void speak() const {
		cout << _name << " Woof " << endl;
	}
};

class Cow : public Animal {
public:
	Cow(string name)
		: Animal(name)
	{}

	virtual void speak() const {
		cout << _name << " Mooooo " << endl;
	}
};

int main4() {
	/*Animal a1("Hi");
	a1.speak();*/

	Cow cow("myCow");
	cow.speak(); // myCow Mooooo
	return 0;
}