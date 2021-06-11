#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name), NinjaTrap(name), FragTrap(name) {
	std::cout << "Sweet life juice!" << std::endl;
	HP = FragTrap::HP;
	MAX_HP = FragTrap::MAX_HP;
	_energy_point = NinjaTrap::_energy_point;
	MAX_EP = NinjaTrap::MAX_EP;
	_level = 1;
	Name = name;
	ranged_attack_dmg = FragTrap::ranged_attack_dmg;
	melee_attack_dmg = NinjaTrap::melee_attack_dmg;
	armor_reduction = FragTrap::armor_reduction;
}

SuperTrap::~SuperTrap() {
	std::cout << "Crap happens" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &superTrap) {
	std::cout << "I need tiny death pellets!" << std::endl;
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
	FragTrap::meleeAttack(target);
}
