#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy() {
	HP = 80;
	type = "RadScorpion";
	std::cout << "* click click click *"<< std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy) {
	*this = copy;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &radScorpion) {
	if (this == &radScorpion)
		return (*this);
	HP = radScorpion.HP;
	type = radScorpion.type;
	return (*this);
}

void RadScorpion::takeDamage(int damage) {
	Enemy::takeDamage(damage);
}
