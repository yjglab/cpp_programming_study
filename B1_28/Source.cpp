#include <iostream>
using namespace std;

// *** �Ҹ��� Destructor ***
/*
�Ҹ��ڴ� �ν��Ͻ��� �޸𸮿��� ������ �� ���ο��� �ڵ����� ȣ���.
���� �Ҵ����� ������� ��쿡�� ������ ����� �ڵ����� �޸𸮰� ��������
�ʱ� ������ delete���� �޸𸮸� �����Ҷ����� �Ҹ��ڰ� ȣ���

�Ҹ��ڸ� ���α׷��Ӱ� ���� ȣ���ϴ� ���� ��κ��� ��� �������� ����
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
	~Simple() // �Ҹ��� | parameter ����
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
			delete[] _arr; // �޸� leak�� �Ͼ�� ������ �ذ�
		}
	}
};
int main2() {
	Simple sp1(0);
	Simple sp2(1);

	Simple* sp3 = new Simple(5);
	delete sp3;

	cout << endl;
	
	// �Ҹ��� ��� ����
	while (1) {
		IntArr myIntArr(10000);
	}


	return 0;
}