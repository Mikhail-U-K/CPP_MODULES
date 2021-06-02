#include "HumanB.hpp"

void HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string& name) {
	this->name = name;
}

Weapon *HumanB::getWeapon() const {
	return (weapon);
}

void HumanB::setWeapon(Weapon &weapon_) {
	HumanB::weapon = &weapon_;
}

