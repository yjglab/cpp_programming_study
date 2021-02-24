#pragma once
#include "Person.h"

class Teacher : public Person {
private:
	
public:
	Teacher(const std::string& name_in = "No Name")
		: Person(name_in)
	{ }

	void teach() {
		std::cout << getName() << " is teaching" << std::endl;
	}
	friend std::ostream& operator << (std::ostream& out, const Teacher& teacher) {
		out << teacher.getName();
		return out;
	}

};