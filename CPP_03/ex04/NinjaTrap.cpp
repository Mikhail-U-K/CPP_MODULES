#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name) {
	HP = 60;
	_energy_point = 120;
	_level = 1;
	MAX_EP = 120;
	MAX_HP = 60;
	melee_attack_dmg = 60;
	ranged_attack_dmg = 5;
	armor_reduction = 0;
	Name = name;
	std::cout << "FR4G-TP <" << Name << "> Recompiling my combat code!" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "I have many regrets!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy) {
	std::cout << "Performing ultra copying skills" << std::endl;
	*this = copy;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &ninjaTrap) {
	std::cout << "Making everybody equal" << std::endl;
	HP = ninjaTrap.HP;
	_energy_point = ninjaTrap._energy_point;
	Name = ninjaTrap.Name;
	_level = ninjaTrap._level;
	armor_reduction = ninjaTrap.armor_reduction;
	MAX_HP = ninjaTrap.MAX_HP;
	MAX_EP = ninjaTrap.MAX_EP;
	melee_attack_dmg = ninjaTrap.melee_attack_dmg;
	ranged_attack_dmg = ninjaTrap.ranged_attack_dmg;
	return (*this);
}

void NinjaTrap::ninjaShoebox(const ClapTrap &clapTrap) {
	std::cout << "*Blop* ClapTrap here *Blop*" << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap &ninjaTrap) {
	std::cout << "You got caught into ninja trap" << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &scavTrap) {
	std::cout << "ScavTrap is the boss of the gym!" << std::endl;
}

void NinjaTrap::ninjaShoebox(const FragTrap &fragTrap) {
	std::cout << "Why do i even exist" << std::endl;
}

NinjaTrap::NinjaTrap() {
	_energy_point = 120;
	melee_attack_dmg = 60;
	MAX_EP = 120;
}