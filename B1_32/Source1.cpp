#include <iostream>

using namespace std;
// *** friend function ģ���Լ��� class ***

class A2; 

class B2 {
private:
	int _value = 2;

public:
	void func(A2& a2);
};

class A2 {
private:
	int _value = 1;

	// friend class B2;
	friend void B2::func(A2& a2); // class A2 ��ü�� �������� �ʰ� B2�� func�Լ����Ը� ������
};

void B2::func(A2& a2) {
	cout << a2._value << endl;
}

int main3() {
	A2 a2;
	B2 b2;
	
	b2.func(a2); // 1

	return 0;
}