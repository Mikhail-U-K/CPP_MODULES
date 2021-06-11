#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap("ABOBA"){
	Name = name;
	HP = 100;
	_energy_point = 100;
	_level = 1;
	MAX_EP = 100;
	MAX_HP = 100;
	melee_attack_dmg = 30;
	ranged_attack_dmg = 20;
	armor_reduction = 5;
	std::cout << "FR4G-TP <" << Name << ">: Look out everybody! Things are about to get awesome!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP <" << Name << ">: I'm too pretty to die!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) {
	std::cout << "*unintelligible snarling*" << std::endl;
//	ClapTrap("Aboba");
	*this = copy;
}

FragTrap &FragTrap::operator = (const FragTrap &fragTrap) {
	std::cout << "You jerks have NO idea what you're in for!" << std::endl;
//	if (*this != fragTrap)
//	{
		HP = fragTrap.HP;
		_energy_point = fragTrap._energy_point;
		Name = fragTrap.Name;
		_level = fragTrap._level;
		armor_reduction = fragTrap.armor_reduction;
		MAX_HP = fragTrap.MAX_HP;
		MAX_EP = fragTrap.MAX_EP;
		melee_attack_dmg = fragTrap.melee_attack_dmg;
		ranged_attack_dmg = fragTrap.ranged_attack_dmg;
//	}
	return (*this);
}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {
	const int				quantity = 5;
	std::string		funny_phrases[quantity] = {"It's time for my free grenade giveaway!",
										"Kill, reload! Kill, reload! KILL! RELOAD!",
										"Laaasers!",
										"I feel a joke about poop decks coming on!",
										"I am rubber, and you are so dead!"};
	int				i;
	const int		energy_wasted = 25;

	i = rand() % quantity;
	if (_energy_point == 0)
		std::cout << "Hnngh! Empty!" << std::endl;
	else
	{
		std::cout << funny_phrases[i] << std::endl;
		if (rand() % 2)
			rangedAttack(target);
		else
			meleeAttack(target);
		_energy_point = _energy_point - energy_wasted;
		if (_energy_point < 0)
			_energy_point = 0;
	}
}
