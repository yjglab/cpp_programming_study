
#include "Monster.h"
using namespace std;

// *** 按眉甸狼 包拌 (1) 备己 包拌 ***


int main() {
	Monster m1("Sanson", Position2D(0, 0));
	
	cout << m1 << endl; // Sanson 0 0

	Monster m2("jammy", Position2D(0, 0));
	

	//while (1) {
		//event
		m1.moveTo(Position2D(1, 1));
		cout << m1 << endl; // Sanson 1 1
	//}
	return 0;
}