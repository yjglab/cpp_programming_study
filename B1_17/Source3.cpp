#include <iostream>
using namespace std;
int main() {
	// *** for 반복문 ***
	
	for (int count = 9; count >= 0; count -= 2) { // 반복 iteration
		cout << count << endl; // 9 7 5 3 1
	}

	for (int i = 0, j = 0; i < 10; ++i, --j) {
		cout << i << " " << j << endl;
	}

	/*
	for (unsigned int i = 9; i >= 0; --i) {
		cout << i << endl; // 0 이후 -1 되어 overflow
	}
	*/

	int c = 0;
	do {
		if (c == 5) {
			continue;
		}
		cout << c; // 012346789
		/*c++;*/
	} while (++c < 10);

	cout << endl;

	//
	int cnt = 0;
	bool escapeFlag = false;
	while (!escapeFlag) {
		char ch;
		cin >> ch;
		cout << ch << " " << cnt << endl;

		if (ch == 'x') {
			escapeFlag = true;
		}
	}
	return 0;
}