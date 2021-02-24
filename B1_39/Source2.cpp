#include <iostream>

using namespace std;
// *** ������ Ŭ���� ���� ���� ���� ***

class AA {
public:
	AA(int a)
	{
		cout << "AA: " << a << endl;
	}

	~AA()
	{
		cout << "�Ҹ��� A" << endl;
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
		cout << "�Ҹ��� B" << endl;
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
		cout << "�Ҹ��� C" << endl;
	}
};
int main4() {
	CC c(1024, 3.14, 'a'); // ������� : ������ AA - > BB -> CC -> �Ҹ��� CC -> BB -> CC

	return 0;
}