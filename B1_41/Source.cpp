#include <iostream>
using namespace std;

// *** 동적 바인딩 정적 바인딩 ***
int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}

int main2() {

	int x, y;
	cin >> x >> y;
	int op;
	cout << "0 : add, 1 : sub, 2 : mul" << endl;
	cin >> op;

	/* static binding (early binding)
	int result;
	switch (op) {
	case 0: result = add(x, y); break;
	case 1: result = sub(x, y); break;
	case 2: result = mul(x, y); break;
	}
	cout << result << endl;
	*/

	// Dynamic binding (late binding)
	int(*func_ptr)(int, int) = nullptr;
	switch (op) {
	case 0: func_ptr = add; break;
	case 1: func_ptr = sub; break;
	case 2: func_ptr = mul; break;
	}
	cout << func_ptr(x, y) << endl;

	return 0;
}
