#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) {
	Name = name;
	HP = 100;
	_energy_point = 100;
	_level = 1;
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
	HP = fragTrap.getHp();
	_energy_point = fragTrap.getEnergyPoint();
	Name = fragTrap.getName();
	_level = fragTrap.getLevel();
	return (*this);
}

void FragTrap::rangedAttack(const std::string &target) {
	std::cout << "*FR4G-TP <" << Name << "> attacks <" << target << "> at range, causing " << getRangedAttackDmg()<< " points of damage!*" << std::endl;
}

void FragTrap::meleeAttack(const std::string &target) {
	std::cout << "*FR4G-TP <" << Name << "> attacks <" << target << "> in melee, causing " << getMeleeAttackDmg()<< " points of damage!*" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	int		cur_hp;

	if(getArmorReduction() > amount)
		cur_hp = getHp();
	else
		cur_hp = getHp() - (amount - getArmorReduction());
	if (cur_hp < 0)
		cur_hp = 0;
	setHp(cur_hp);
	std::cout << "Why do I even feel pain?!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	int		cur_hp;

	cur_hp = getHp() + amount;
	if (cur_hp > getMaxHp())
		cur_hp = getMaxHp();
	setHp(cur_hp);
	std::cout << "Can I just say... yeehaw" << std::endl;
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
	if (getEnergyPoint() == 0)
		std::cout << "Hnngh! Empty!" << std::endl;
	else
	{
		std::cout << funny_phrases[i] << std::endl;
		if (rand() % 2)
			rangedAttack(target);
		else
			meleeAttack(target);
		setEnergyPoint(getEnergyPoint() - energy_wasted);
		if (getEnergyPoint() < 0)
			setEnergyPoint(0);
	}
}

//================================SETTERS==============================//

void FragTrap::setHp(int hp) {
	HP = hp;
}

void FragTrap::setEnergyPoint(int energyPoint) {
	_energy_point = energyPoint;
}

void FragTrap::setName(const std::string &name) {
	Name = name;
}

void FragTrap::setLevel(unsigned int level) {
	_level = level;
}

//==============================GETTERS===============================//

int FragTrap::getHp() const {return (HP);}

int FragTrap::getEnergyPoint() const {return (_energy_point);}

const std::string &FragTrap::getName() const {return (Name);}

unsigned int FragTrap::getLevel() const {return (_level);}

const unsigned int FragTrap::getMaxEp() {return (MAX_EP);}

const unsigned int FragTrap::getMeleeAttackDmg() {return (melee_attack_dmg);}

const unsigned int FragTrap::getRangedAttackDmg() {return (ranged_attack_dmg);}

const unsigned int FragTrap::getMaxHp() {return (MAX_HP);}

const unsigned int FragTrap::getArmorReduction() {return (armor_reduction);}
