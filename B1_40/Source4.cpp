#include <iostream>
using namespace std;

// *** virtual, override, final *** 
class AA {
public:
	virtual void print(int x) {
		cout << "AA" << endl;
	}
};

class BB : public AA {
public:
	void print(int x) override { // override �Է� : �� �Լ��� �ݵ�� override �Ǿ�� ���� ������
		cout << "BB" << endl;
	}
};

class CC : public BB {
public:
	virtual void print() final { // CC�� ��ӹ޴� Ŭ������ virtual�Լ��� �������̵��� ����
		cout << "CC" << endl;
	}
};

class DD : public CC {
public:
	/* virtual void print() {
		cout << "D" << endl; // CC�� �Լ��� final�� �Ǿ������Ƿ� �������̵� �Ұ���
	}*/
};

int main6() {
	AA aa;
	BB bb;
	//CC cc;

	AA& ref_AA = bb;
	ref_AA.print(1); // BB

	return 0;
}