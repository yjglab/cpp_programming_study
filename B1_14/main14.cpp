#include <iostream>
#include "constants14.h"

using namespace std;
extern void printSyntax();

int main() {

	cout << "main14.cpp에서 출력된 pi" << Constants::pi << " " << &Constants::pi << endl;
	
	printSyntax();
	return 0;
}