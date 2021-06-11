#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) {
	HP = 100;
	_energy_point = 100;
	_level = 1;
	MAX_EP = 100;
	MAX_HP = 100;
	melee_attack_dmg = 25;
	ranged_attack_dmg = 15;
	armor_reduction = 5;
	Name = name;
	std::cout << "FR4G-TP <" << Name << "> Let's get this party started" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "FR4G-TP <" << Name << "> Robot down!" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &clapTrap) {
	std::cout << "==What is that smell? Oh, never mind... it's just you!==" << std::endl;
	HP = clapTrap.HP;
	_energy_point = clapTrap._energy_point;
	Name = clapTrap.Name;
	_level = clapTrap._level;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "Coping... Ooh yeah, watch me! Watch me go! Coping..." <<std::endl;
	*this = copy;
}

void ClapTrap::rangedAttack(const std::string &target) {
	std::cout << "*FR4G-TP <" << Name << "> attacks <" << target << "> at range, causing " << ranged_attack_dmg << " points of damage!*" << std::endl;

}

void ClapTrap::meleeAttack(const std::string &target) {
	std::cout << "*FR4G-TP <" << Name << "> attacks <" << target << "> in melee, causing " << melee_attack_dmg << " points of damage!*" << std::endl;
}

void ClapTrap::takeDamage(int amount) {
	int		cur_hp;

	if(armor_reduction > amount)
		cur_hp = HP;
	else
		cur_hp = HP - (amount - armor_reduction);
	if (cur_hp < 0)
		cur_hp = 0;
	HP = cur_hp;
	std::cout << "Why do I even feel pain?!" << std::endl;
}

void ClapTrap::beRepaired(int amount) {
	int		cur_hp;

	cur_hp = HP + amount;
	if (cur_hp > MAX_HP)
		cur_hp = MAX_HP;
	HP = cur_hp;
	std::cout << "Can I just say... yeehaw" << std::endl;
}

ClapTrap::ClapTrap() {
	std::cout << "DEFAULT CONSTRUCTOR!!!" << std::endl;
}
