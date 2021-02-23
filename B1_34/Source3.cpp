#include <iostream>
#include <cassert>
using namespace std;

// *** 대입 연산자 오버로딩, 깊은복사, 얕은복사

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

	~MyString() // memory leak 방지
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
		if (this == &source) { // 자신이 자신을 복사하는 경우를 방지
			return *this;
		}
		delete[] _data; // 새로운 메모리를 할당하기 전, 이미 가지고 있는 메모리가 있을 수 있으므로 삭제함

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
	
	cout << (int*)hello._data << endl; // int*로 변환하여 주소 출력
	cout << hello.getString() << endl; // Hello

	{
		MyString copy = hello; // Copy constructor
		cout << (int*)copy._data << endl; // hello._data의 주소와 다름
		cout << copy.getString() << endl; // Hello
	} // 소멸자 실행되고 copy._data를 삭제함
	cout << hello.getString() << endl; // Hello

	//
	cout << endl;
	MyString str1 = hello; // assignment operator가 사용되었지만 copy constructor가 호출됨 | 새로운 str1이 생성되는 부분이므로 | == MyString str1(hello);
	MyString str2;
	str2 = str1; // Assignment operator

	cout << (int*)str1._data << endl; // 서로
	cout << (int*)hello._data << endl; // 주소가
	cout << (int*)str2._data << endl; // 모두 다름

	/*
	구분 
	MyString str1 = hello; => copy constructor 호출
	str1 = hello; => Assignment operator 오버로딩
	*/
	

	return 0;
}