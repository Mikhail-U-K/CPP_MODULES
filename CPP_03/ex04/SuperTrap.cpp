#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name), FragTrap(), NinjaTrap()
{
	std::cout << "Sweet life juice!" << std::endl;
	_level = 1;
	Name = name;
}

SuperTrap::~SuperTrap() {
	std::cout << "Crap happens" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &superTrap) {
	std::cout << "I need tiny death pellets!" << std::endl;
	HP = superTrap.HP;
	MAX_EP = superTrap.MAX_EP;
	MAX_HP = superTrap.MAX_HP;
	_energy_point = superTrap._energy_point;
	_level = superTrap._level;
	Name = superTrap.Name;
	ranged_attack_dmg = superTrap.ranged_attack_dmg;
	melee_attack_dmg = superTrap.melee_attack_dmg;
	armor_reduction = superTrap.armor_reduction;
	return (*this);
}

SuperTrap::SuperTrap(const SuperTrap &copy) {
	std::cout << "Making copy of SuperTrap" << std::endl;
	*this = copy;
}

void SuperTrap::rangedAttack(const std::string &target) {
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string &target) {
	NinjaTrap::meleeAttack(target);
}
