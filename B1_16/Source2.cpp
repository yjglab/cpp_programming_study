#include <iostream>
using namespace std;

int main4() {
	enum class Color {
		RED,
		BLUE,
	};

	enum class Fruit {
		BANANA,
		APPLE,
	};

	Color color1 = Color::RED;
	Color color2 = Color::BLUE;
	Fruit fruit = Fruit::BANANA;
	
	/*if (color == fruit) {
		cout << "Color is fruit? " << endl; 
	}*/
	if (color1 == color2) {
		cout << "Same color" << endl; // ¹Ì ½ÇÇà
	}
	

	return 0;
}