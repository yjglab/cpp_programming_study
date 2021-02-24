#include <iostream>

using namespace std;
// *** 유도된 클래스 들의 생성 순서 ***

class AA {
public:
	AA(int a)
	{
		cout << "AA: " << a << endl;
	}

	~AA()
	{
		cout << "소멸자 A" << endl;
	}
};

class BB : public AA {
public:
	BB(int a, double b)
		: AA(a)
	{
		cout << "BB: " << b << endl;
	}

	~BB()
	{
		cout << "소멸자 B" << endl;
	}
};

class CC : public BB {
public:
	CC(int a, double b, char c)
		: BB(a, b)
	{
		cout << "CC : " << c << endl;
	}

	~CC()
	{
		cout << "소멸자 C" << endl;
	}
};
int main4() {
	CC c(1024, 3.14, 'a'); // 실행순서 : 생성자 AA - > BB -> CC -> 소멸자 CC -> BB -> CC

	return 0;
}