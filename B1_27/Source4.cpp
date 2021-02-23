// *** 위임 생성자 ***

#include <iostream>
using namespace std;

class Student {
private:
	int _id;
	string _name;

public:
	Student(const string& name_in) // 위임 생성자 : 생성자를 가져다 씀 (C++ 11 ^)
		// : _id(0), _name(name_in) 중복된 초기화 하지 말것
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

/* 위임 생성자를 만능초기화(void init) 함수로 대신하기 (legacy) : 초기화 코드를 분리하는 방식
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