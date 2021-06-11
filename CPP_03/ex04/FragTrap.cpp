#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name){
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
	*this = copy;
}

FragTrap &FragTrap::operator = (const FragTrap &fragTrap) {
	std::cout << "You jerks have NO idea what you're in for!" << std::endl;
	HP = fragTrap.HP;
	_energy_point = fragTrap._energy_point;
	Name = fragTrap.Name;
	_level = fragTrap._level;
	armor_reduction = fragTrap.armor_reduction;
	MAX_HP = fragTrap.MAX_HP;
	MAX_EP = fragTrap.MAX_EP;
	melee_attack_dmg = fragTrap.melee_attack_dmg;
	ranged_attack_dmg = fragTrap.ranged_attack_dmg;
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

void FragTrap::rangedAttack(const std::string &target) {
	std::cout << "*FR4G-TP <" << Name << "> attacks <" << target << "> at range, causing " << ranged_attack_dmg << " points of damage!*" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) {
	std::cout << "*FR4G-TP <" << Name << "> attacks <" << target << "> in melee, causing " << melee_attack_dmg << " points of damage!*" << std::endl;
}

void FragTrap::takeDamage(int amount) {
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

void FragTrap::beRepaired(int amount) {
	int		cur_hp;

	cur_hp = HP + amount;
	if (cur_hp > MAX_HP)
		cur_hp = MAX_HP;
	HP = cur_hp;
	std::cout << "Can I just say... yeehaw" << std::endl;
}

FragTrap::FragTrap() {

}