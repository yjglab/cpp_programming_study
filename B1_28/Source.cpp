#include <iostream>
using namespace std;

// *** 소멸자 Destructor ***
/*
소멸자는 인스턴스가 메모리에서 해제될 때 내부에서 자동으로 호출됨.
동적 할당으로 만들어진 경우에는 영역을 벗어나도 자동으로 메모리가 해제되지
않기 때문에 delete으로 메모리를 해제할때에만 소멸자가 호출됨

소멸자를 프로그래머가 직접 호출하는 것은 대부분의 경우 권장하지 않음
*/

class Simple {
private:
	int _id;

public:
	Simple(const int& id_in)
		: _id(id_in)
	{
		cout << "Constructor " << _id << endl;
	}
	~Simple() // 소멸자 | parameter 없음
	{
		cout << "Destructor " << _id << endl;
	}
};

class IntArr {
private:
	int* _arr = nullptr;
	int _length = 0;

public:
	IntArr(const int length_in)
	{
		_length = length_in;
		_arr = new int[_length];
	}

	int getLength() {
		return _length;
	}
	~IntArr()
	{
		if (_arr != nullptr) {
			delete[] _arr; // 메모리 leak이 일어나는 현상을 해결
		}
	}
};
int main2() {
	Simple sp1(0);
	Simple sp2(1);

	Simple* sp3 = new Simple(5);
	delete sp3;

	cout << endl;
	
	// 소멸자 사용 예시
	while (1) {
		IntArr myIntArr(10000);
	}


	return 0;
}