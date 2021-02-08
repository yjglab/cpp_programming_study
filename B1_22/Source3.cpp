#include <iostream>
using namespace std;
// *** void pointer ***

enum Type {
	INT,
	FLOAT,
	CHAR,
};

int main5() {
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;
	
	ptr = &i; // �ּ��̹Ƿ� �ڷ����� ���þ��� �Ҵ� ����
	ptr = &c;
	ptr = &f;


	// void pointer�� ������ ����, de-referecning �Ұ�
	/* cout << ptr + 1; */
	/* cout << *ptr << endl; */
	
	Type type = FLOAT; // �������� ���
	if (type == FLOAT) {
		cout << *static_cast<float*>(ptr) << endl; // 3 | float* �� ĳ������ ���� de-referencing
	}
	else if (type == INT) {
		// .. int�� ĳ����
	}
	

	return 0;
}