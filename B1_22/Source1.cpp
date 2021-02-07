#include <iostream>

using namespace std;

struct Person {
	int age;
	double weight;
};

int main3() {
	Person p1;
	p1.age = 20;
	p1.weight = 60;

	Person& ref = p1;
	ref.age = 22;
	ref.weight = 76;

	Person* ptr_p1 = &p1;
	ptr_p1->age = 30;
	ptr_p1->weight = 90;
	(*ptr_p1).age = 35;

	Person& ref2 = *ptr_p1;
	ref2.age = 42;

	cout << &p1 << endl; // 林家 悼老
	cout << &ref2 << endl; // 林家 悼老

	return 0;
}