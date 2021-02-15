#include <iostream>

using namespace std;

// *** 클래스 안에 포함된 자료형 nested types ***

class Fruit {
public:
	enum class FruitType {
		APPLE, BANANA, CHERRY,
	};
	class InnerClass {
		// ...
	};
	struct InnerStruct {
		// ...
	};
private:
	FruitType _type;

public:
	Fruit(FruitType type)
		: _type(type)
	{

	}
	FruitType getType() {
		return _type;
	}
};
int main6() {
	Fruit apple(Fruit::FruitType::APPLE);
	if (apple.getType() == Fruit::FruitType::APPLE) {
		cout << "It is Apple" << endl;
	}
	return 0;
}