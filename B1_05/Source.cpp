#include <iostream>

// *** 네임스페이스 ***
namespace MySpace1 {

	namespace InnerSpace {
		int myFunction() {
			return 0;
		}
	}
	int doing(int a, int b) {
		return a + b;
	}
}

int doing(int a, int b) {
	return a * b;
}

using namespace std;
int main() {
	cout << doing(3, 4) << endl; // 12
	cout << MySpace1::doing(3, 4) << endl; // 7

	using namespace MySpace1;
	//doing(3, 4); => == MySpace1::doing(3, 4)

	using namespace MySpace1::InnerSpace;
	myFunction(); // == MySpace1::InnerSpace::myFunction()

	return 0;
}