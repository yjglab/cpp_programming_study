#include <iostream>
#include <cmath>

using namespace std;
int main() {
	// *** label , goto ***
	// 사용빈도 낮음
	// goto문은 label 위에서 존재할 수 없음

	double x;
tryAgain : // label (명칭은 자유)

	cout << "Enter a non-negative number" << endl;
	cin >> x;
	if (x < 0.0) {
		goto tryAgain; // 해당 label로 이동
	}
	cout << sqrt(x) << endl; // x의 제곱근

	// *** do - while ***
	int selection;

	do { // 1번은 반드시 실행
		cout << "1. add" << endl;
		cout << "2. sub" << endl;
		cout << "3. mul" << endl;
		cout << "4. div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	cout << "you selected " << selection << endl;

	return 0;
}