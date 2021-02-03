#include <iostream>
#include <cmath>

using namespace std;
int main4() {
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
	cout << sqrt(x) << endl;
	return 0;
}