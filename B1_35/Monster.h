#pragma once
#include "Position2D.h"
#include <string>

class Monster {
private:
	std::string _name;
	Position2D _location;
	

public:
	Monster(const std::string name_in, const Position2D& pos_in)
		: _name(name_in), _location(pos_in)
	{

	}

	void moveTo(const Position2D& pos_target) {
		_location.set(pos_target);
	}
	
	friend std::ostream& operator << (std::ostream& out, const Monster& mon) {
		out << mon._name << " " << mon._location;
		return out;
	}
	
};