#include <iostream>
#include <cassert>
#include <initializer_list>

using namespace std;

// *** initializer list ***
class IntArray {
private:
	unsigned _length = 0;
	int* _data = nullptr;

public:
	IntArray(unsigned length)
		: _length(length)
	{
		_data = new int[length];
	}

	IntArray(const std::initializer_list<int>& list) // = operator�� ���� �����ε� ���ִ� ���� ����
		:IntArray(list.size())
	{
		int count = 0;
		for (auto& e : list) {
			_data[count] = e;
			++count;
		}

		/* for (unsigned count = 0; count < list.size(); ++count) {
			_data[count] = list[count]; // list[count] => error
		} // initializer list�� [] operator �������� ���� */
	}


	friend ostream& operator << (ostream& out, IntArray& arr) {
		for (unsigned i = 0; i < arr._length; ++i) {
			out << arr._data[i] << " ";
		}
		out << endl;
		return out;
	}
};

int main() {
	int arr1[5] = { 1, 2 ,3 ,4 ,5 };
	int* arr2 = new int[5]{ 1, 2 ,3 ,4 ,5 };
	auto il = { 10, 20 ,30 };

	IntArray int_array{ 1, 2 ,3 ,4 ,5 };
	cout << int_array << endl; // 1 2 3 4 5 

	return 0;
}