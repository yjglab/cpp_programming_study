#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture {
private:
	std::string _name;

	Teacher* teacher;
	std::vector<Student*> students;
	
public:
	Lecture(const std::string& name_in)
		:_name(name_in)
	{ }
	~Lecture()
	{
		// do Not delete teacher, students
	}
	void assignTeacher(Teacher* const teacher_input) {
		teacher = teacher_input;
	}
	void registerStudent(Student* const student_input) { 
		students.push_back(student_input); // &student_input != &students[0] | student_input을 복사해서 넣음
	}
	void study() {
		std::cout << _name << " Study " << std::endl << std::endl;
		for (auto& e : students) { // can use "auto e : students"
			(*e).setIntel((*e).getIntel() + 1);
		}
	}
	friend std::ostream& operator << (std::ostream& out, const Lecture& lecture) {
		out << "Lecture name : " << lecture._name << std::endl;

		out << *lecture.teacher << std::endl;
		for (auto e : lecture.students) {
			out << *e << std::endl;
		}
		return out;
	}
};