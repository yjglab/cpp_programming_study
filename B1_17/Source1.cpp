#include <iostream>
#include <cstdlib>
using namespace std;

/* 
	*** ���� �帧 control flow *** 
	(1) �ߴ� : exit(0);
	(2) ���� : goto, break, continue
	(3) �ݺ� ���� : while, do while, for
	(4) ����ó�� : try, catch, throw
	(5) ���� �б� : if, switch
*/
 

// *** switch - case ***
// case���� �� {} ���� ���� �� ����
enum class Colors {
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE,
};

void printColorName(Colors color) {
	
	switch (color) {
	case Colors::BLACK :
		cout << "Black" << endl; 
		break;
	}

	switch (static_cast<int>(color)) {
	case 0:
		cout << "Black" << endl;
		break;
	}
}
int main3() {
	// 
	int x;
	if (x = 0) { // �̽���
		cout << x << endl;
	}
	cout << x << endl; // 0

	printColorName(Colors::BLACK);
	int a;
	cin >> a;
	{
		switch (a) {
		case 0:
			cout << "Zero" << endl;
			break; // �ǵ������� break ������� �ʴ� ��쵵 ����
		case 1:
			cout << "One" << endl;
			break;
		case 2:
			cout << "Two" << endl;
			break;
		case 3:
			cout << "Three" << endl;
			break;
		}
		cout << endl;
	}

	//
	int i;
	cin >> i;
	switch (i) {
		int p; // ���� ������ ���� (�������� ����)
		int q;
		/*int q = 5; �� �Ҵ��� �Ұ���*/
	case 0:
		q = 10;
		int u;
		break;
	}

	//
	int k;
	cin >> k;
	switch (k) {

	case 0:
		int m; // ������ case���� �Ͽ��� switch �ȿ��� ������ ������ ����
		break;
	case 1:
		m = 100;
		cout << m << endl; // case0���� ����� ����m�� ���� �Ҵ��� �� �ְ� ��� ����

	default:
		cout << "Undefined input " << k << endl;
		break;
	}

	return 0;
}