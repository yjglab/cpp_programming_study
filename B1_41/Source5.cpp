#include <iostream>
#include <vector>
#include <functional>

using namespace std;
// *** Object Slicing과 reference wrapper ***

class Base1 {
public:
	int _i = 0;
	virtual void print() {
		cout << "I'm Base1" << endl;
	}
};

class Derived1 : public Base1 {
public:
	int _j = 1;
	virtual void print() override {
		cout << "I'm Derived1" << endl;
	}
};

void doSomething1(Base1& b1) {
	b1.print();
}

int main() {
	Derived1 d1;
	Base1& b1 = d1;

	b1.print(); // I'm Derived1

	Base1 b11 = d1;
	b11.print(); // I'm Base1 | Object Slicing

	//
	Base1 myBase;
	Derived1 myDerived;

	std::vector<Base1> my_vec;
	my_vec.push_back(myBase);
	my_vec.push_back(myDerived);

	for (auto& e : my_vec) {
		e.print(); // I'm Base1\nI'm Base1 | Base1 배열에 들어간 myDerived가 강제로 slicing 됨.
	}

	//
	std::vector<Base1*> my_vec2;
	my_vec2.push_back(&myBase);
	my_vec2.push_back(&myDerived);

	for (auto& e : my_vec2) {
		e->print(); // I'm Base1\nI'm Derived1 
	}

	// 기본적으로는 vector로 reference 배열을 만들 수 없음 | ex. vector<Base1&> => X
	std::vector<std::reference_wrapper<Base1>> my_vec3; // Base1의 reference배열로 선언
	my_vec3.push_back(myBase);
	my_vec3.push_back(myDerived);

	for (auto& e : my_vec3) {
		e.get().print(); // I'm Base1\nI'm Derived1 | get() : reference로부터 인스턴스를 받아옴
	}
	


	return 0;

}