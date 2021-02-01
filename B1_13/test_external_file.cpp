#include <iostream>
using namespace std;

extern int external_var = 1000;

void external_func() {
	cout << "hello file" << endl;
}