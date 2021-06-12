#include "PowerFist.hpp"

PowerFist::PowerFist() {
	name = "Power Fist";
	damage = 50;
	AP = 8;
}

PowerFist::PowerFist(const PowerFist &copy) {
	*this = copy;
}

PowerFist &PowerFist::operator=(const PowerFist &powerFist) {
	if (this == &powerFist)
		return (*this);
	name = powerFist.name;
	damage = powerFist.damage;
	AP = powerFist.AP;
	return (*this);
}

PowerFist::~PowerFist() {
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}


