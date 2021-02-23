// *** ���� ������ ***

#include <iostream>
using namespace std;

class Student {
private:
	int _id;
	string _name;

public:
	Student(const string& name_in) // ���� ������ : �����ڸ� ������ �� (C++ 11 ^)
		// : _id(0), _name(name_in) �ߺ��� �ʱ�ȭ ���� ����
		: Student(0, name_in)
	{

	}
	Student(const int& id_in, const string& name_in)
		: _id(id_in), _name(name_in)
	{

	}
	void print_q() {
		cout << _id << " " << _name << endl;
	}
};
int main() {
	Student s1(1, "james");
	s1.print_q(); // 1 james

	Student s2("Dash");
	s2.print_q(); // 0 Dash
	return 0;
}

/* ���� �����ڸ� �����ʱ�ȭ(void init) �Լ��� ����ϱ� (legacy) : �ʱ�ȭ �ڵ带 �и��ϴ� ���
class Student {
private:
	int _id;
	string _name;

public:
	Student(const string& name_in)
	{
		init(0, name_in);
	}
	Student(const int& id_in, const string& name_in)
	{
		init(id_in, name_in);
	}
	void init(const int& id_in, const string& name_in)
	{
		_id = id_in;
		_name = name_in;
	}
	void print_q() {
		cout << _id << " " << _name << endl;
	}
};
*/