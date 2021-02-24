#pragma once
#include <string>
#include <iostream>

class Person {
private:
	std::string _name;

public:
	Person(const std::string& name_in = "None")
		: _name(name_in)
	{

	}
	void setName(const std::string& name_in) {
		_name = name_in;
	}

	std::string getName() const {
		return _name;
	}

	void doNothing() const {
		std::cout << _name << " do nothing" << std::endl;
	}
};