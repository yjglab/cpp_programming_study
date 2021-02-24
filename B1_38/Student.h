#pragma once

#include "Person.h"

class Student : public Person {
private:
	
	int _intel; // intelligence

public:
	Student(const std::string& name_in = "No Name", const int& intel_in = 0)
		: Person(name_in), _intel(intel_in)
	{ }

	void setIntel(const int& intel_in) {
		_intel = intel_in;
	}

	int getIntel() {
		return _intel;
	}

	void study() {
		std::cout << getName() << " is studying" << std::endl;
	}
	friend std::ostream& operator << (std::ostream& out, const Student& student) {
		out << student.getName() << " " << student._intel;
		return out;
	}
};