#include <iostream>
#include <cmath>

using namespace std;
int main() {
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
	cout << sqrt(x) << endl; // x�� ������

	// *** do - while ***
	int selection;

	do { // 1���� �ݵ�� ����
		cout << "1. add" << endl;
		cout << "2. sub" << endl;
		cout << "3. mul" << endl;
		cout << "4. div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	cout << "you selected " << selection << endl;

	return 0;
}