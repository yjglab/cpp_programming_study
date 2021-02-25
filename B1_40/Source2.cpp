#include <iostream>
#include <string>

// *** �������� �⺻ ���� ***
using namespace std;
class Animal {
protected:
	string _name;

public:
	Animal(std::string name)
		:_name(name)
	{}

public:
	string getName() {
		return _name;
	}

	virtual void speak() const { // ������ | 
		cout << _name << " speak : ???" << endl; // �ڽ� Ŭ���� ��ü�� �θ� Ŭ���� �����Ϳ� �־ �ڽ� Ŭ����ó�� Ȱ���ϵ��� ��
	}
};

class Cat : public Animal {
public:
	Cat(string name)
		:Animal(name)
	{}

	void speak() const {
		cout << _name << " speak : Meow" << endl;
	}
};

class Dog : public Animal {
public:
	Dog(string name)
		:Animal(name)
	{}

	void speak() const {
		cout << _name << " speak : Woof" << endl;
	}
};

int main4() {
	Animal animal("my Animal");
	Cat cat("my Cat");
	Dog dog("my Dog");

	animal.speak();
	cat.speak();
	dog.speak();

	cout << endl;
	//
	Animal* ptr_animal1 = &cat;
	Animal* ptr_animal2 = &dog;
	ptr_animal1->speak(); // my cat speak : ???
	ptr_animal2->speak(); // �ڽ� Ŭ������ �θ� Ŭ���� ptr�� ����ؼ� ĳ�����Ͽ� ȣ�� �� �ڽ� Ŭ������ �θ� Ŭ������ �� ó�� �۵���
	
	Cat cats[] = { Cat("cat1"), Cat("cat2"), Cat("cat3"), Cat("cat4"), Cat("cat5") };
	Dog dogs[] = { Dog("dog1"), Dog("dog2") };

	//
	cout << endl;
	Animal* my_animals[] = { &cats[0], &cats[1], &cats[2], &cats[3], &cats[4],
							 &dogs[0], &dogs[1] };
	
	for (int i = 0; i < 7; i++) {
		my_animals[i]->speak();
	}


	return 0;
}