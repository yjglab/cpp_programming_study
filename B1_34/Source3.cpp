#include <iostream>
#include <cassert>
using namespace std;

// *** ���� ������ �����ε�, ��������, ��������

class MyString {
public:
	char* _data = nullptr;
	int _length = 0;

public:
	MyString(const MyString& source) {
		cout << "Copy Constructor" << endl;

		_length = source._length;
		if (source._data != nullptr) { // deep copy
			_data = new char[_length];
			for (int i = 0; i < _length; ++i) {
				_data[i] = source._data[i];
			}
		}
		else {
			_data = nullptr;
		}
	}

	MyString(const char* source = "") {
		assert(source);
		_length = std::strlen(source) + 1;
		_data = new char[_length];

		for (int i = 0; i < _length; ++i) {
			_data[i] = source[i];
		}
		_data[_length - 1] = '\0';
	}

	~MyString() // memory leak ����
	{
		delete[] _data;
	}

	char* getString() {
		return _data;
	}
	int getLength() {
		return _length;
	}

	MyString& operator = (const MyString& source) {
		cout << "Assignment operator " << endl;
		if (this == &source) { // �ڽ��� �ڽ��� �����ϴ� ��츦 ����
			return *this;
		}
		delete[] _data; // ���ο� �޸𸮸� �Ҵ��ϱ� ��, �̹� ������ �ִ� �޸𸮰� ���� �� �����Ƿ� ������

		_length = source._length;

		if (source._data != nullptr) {
			_data = new char[_length];
			for (int i = 0; i < _length; ++i) {
				
			}
		}
	}

	/* MyString(const MyString& source) = delete; */
};
int main5() {

	MyString hello("Hello");
	
	cout << (int*)hello._data << endl; // int*�� ��ȯ�Ͽ� �ּ� ���
	cout << hello.getString() << endl; // Hello

	{
		MyString copy = hello; // Copy constructor
		cout << (int*)copy._data << endl; // hello._data�� �ּҿ� �ٸ�
		cout << copy.getString() << endl; // Hello
	} // �Ҹ��� ����ǰ� copy._data�� ������
	cout << hello.getString() << endl; // Hello

	//
	cout << endl;
	MyString str1 = hello; // assignment operator�� ���Ǿ����� copy constructor�� ȣ��� | ���ο� str1�� �����Ǵ� �κ��̹Ƿ� | == MyString str1(hello);
	MyString str2;
	str2 = str1; // Assignment operator

	cout << (int*)str1._data << endl; // ����
	cout << (int*)hello._data << endl; // �ּҰ�
	cout << (int*)str2._data << endl; // ��� �ٸ�

	/*
	���� 
	MyString str1 = hello; => copy constructor ȣ��
	str1 = hello; => Assignment operator �����ε�
	*/
	

	return 0;
}