#include <vector>
#include <iostream>
#include <string>
#include "Lecture.h"


using namespace std;

// *** 객체들의 관계 (2) 집합 관계 ***


int main() {
	Student std1("puly", 0); // 재사용을 하려고 한다면 동적 할당으로 변경하기 | Student *std1 = new Student("puly", 0); + delete까지
	Student std2("Kay", 1);
	Student std3("lamboo", 2);

	Teacher teacher1("Prof. Yuk");
	Teacher teacher2("Prof. James");

	// 구성관계
	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(&teacher1);
	lec1.registerStudent(&std1);
	lec1.registerStudent(&std2);
	lec1.registerStudent(&std3);

	Lecture lec2("Data Structure");
	lec2.assignTeacher(&teacher2);
	lec2.registerStudent(&std1);
	
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		// event
		lec2.study();

		cout << lec1 << endl;
		cout << lec2 << endl;
	}
	return 0;
}