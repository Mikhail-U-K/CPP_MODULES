#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy() {
	HP = 170;
	type = "Super Mutant";
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) {
	*this = copy;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &superMutant) {
	if (this == &superMutant)
		return (*this);
	HP = superMutant.getHp();
	type = superMutant.getType();
	return (*this);
}

void SuperMutant::takeDamage(int damage) {
	Enemy::takeDamage(damage - 3);
}


