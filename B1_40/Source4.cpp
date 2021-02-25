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
	void print(int x) override { // override 입력 : 이 함수는 반드시 override 되어야 함을 선언함
		cout << "BB" << endl;
	}
};

class CC : public BB {
public:
	virtual void print() final { // CC를 상속받는 클래스의 virtual함수의 오버라이딩을 막음
		cout << "CC" << endl;
	}
};

class DD : public CC {
public:
	/* virtual void print() {
		cout << "D" << endl; // CC의 함수가 final로 되어있으므로 오버라이딩 불가능
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