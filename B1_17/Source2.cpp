#include <iostream>
#include <cmath>

using namespace std;
int main4() {
	// *** label , goto ***
	// ���� ����
	// goto���� label ������ ������ �� ����

	double x;
tryAgain : // label (��Ī�� ����)

	cout << "Enter a non-negative number" << endl;
	cin >> x;
	if (x < 0.0) {
		goto tryAgain; // �ش� label�� �̵�
	}
	cout << sqrt(x) << endl;
	return 0;
}