#include "Weapon.hpp"

const std::string &Weapon::getType() const {
	return (type);
}

void Weapon::setType(const std::string &weapon_type) {
	Weapon::type = weapon_type;
}

Weapon::Weapon(const std::string& weapon_type) {
	this->type = weapon_type;
}
