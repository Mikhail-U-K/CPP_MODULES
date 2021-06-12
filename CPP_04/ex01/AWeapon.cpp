#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &weapon_name, int ap, int weapon_damage) {
	damage = weapon_damage;
	name = weapon_name;
	AP = ap;
}

int AWeapon::getAp() const {
	return AP;
}

int AWeapon::getDamage() const {
	return (damage);
}

const std::string &AWeapon::getName() const {
	return (name);
}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(const AWeapon &copy) {
	*this = copy;
}

AWeapon &AWeapon::operator= (const AWeapon &weapon) {
	if (this == &weapon)
		return (*this);
	name = weapon.name;
	damage = weapon.damage;
	AP = weapon.AP;
	return (*this);
}

AWeapon::AWeapon() {
}

