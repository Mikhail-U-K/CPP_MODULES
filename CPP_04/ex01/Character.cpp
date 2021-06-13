#include "Character.hpp"

Character::Character(const std::string &Name) {
	AP = 40;
	name = Name;
	weapon = nullptr;
}

Character::~Character() {}

Character::Character(const Character &copy) {
	*this = copy;
}

Character &Character::operator= (const Character &character) {
	if (this == &character)
		return (*this);
	name = character.name;
	AP = character.AP;
	weapon = character.weapon;
	return (*this);
}

void Character::recoverAP() {
	if (AP == 40)
		return ;
	AP += 10;
}

void Character::equip(AWeapon *some_weapon) {
	weapon = some_weapon;
}

void Character::attack(Enemy *some_enemy) {
	if (!some_enemy || !AP || !weapon)
		return ;
	std::cout << name << " attacks " << some_enemy->getType() << " with a " << weapon->getName() << std::endl;
	weapon->attack();
	some_enemy->takeDamage(weapon->getDamage());
	AP -= weapon->getAp();
	if (!some_enemy->getHp())
		delete (some_enemy);
}

const std::string &Character::getName() const {
	return (name);
}

int Character::getAp() const {
	return (AP);
}

AWeapon *Character::getWeapon() const {
	return (weapon);
}

std::ostream& operator<< (std::ostream &out, const Character &character) {
	if (character.getWeapon())
		out << character.getName() << " has " << character.getAp() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
	else
		out << character.getName() << " has " << character.getAp() << " AP and is unarmed" << std::endl;
	return (out);
}
