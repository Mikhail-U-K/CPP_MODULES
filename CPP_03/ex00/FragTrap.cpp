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
	std::cout << "FR4G-TP <" << Name << "> attacks <" << target << "> at range, causing " << getRangedAttackDmg()<< "points of damage!" << std::endl;
}


void FragTrap::meleeAttack(const std::string &target) {

}

void FragTrap::takeDamage(unsigned int amount) {

}

void FragTrap::beRepaired(unsigned int amount) {

}

void FragTrap::vaulthunter_dot_exe(const std::string &target) {

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
