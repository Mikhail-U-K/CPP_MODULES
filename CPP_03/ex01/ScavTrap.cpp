#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) {
	Name = name;
	HP = 100;
	_energy_point = 50;
	_level = 1;
	std::cout << "FR4G-TP <" << Name << "> Hey everybody! Check out my package!" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &scavTrap) {
	std::cout << "Unts unts unts unts!" << std::endl;
	HP = scavTrap.getHp();
	_energy_point = scavTrap.getEnergyPoint();
	Name = scavTrap.getName();
	_level = scavTrap.getLevel();
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &copy) {
	std::cout << "Psst! Ad-ass-bay, over ere-bay!" << std::endl;
	setName(copy.getName());
	setHp(copy.getHp());
	setEnergyPoint(copy.getEnergyPoint());
	setLevel(copy.getLevel());
}

ScavTrap::~ScavTrap() {
	std::cout << "FR4G-TP <" << Name << "> Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

void ScavTrap::challengeNewcomer() {
	const int				quantity = 6;
	std::string		funny_phrases[quantity] = {"Give me your princesses or Save me from the Badass!",
												"You call yourself a badass? Than give me your best shot!",
												"Roses are red and/Violets are blue/Wait... how many syllables was that?",
												"Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!",
												"Uh, how do I cast magic missile?",
												"Is this really canon?"};
	int						i;
	i = rand() % quantity;
	std::cout << funny_phrases[i] << std::endl;
}

//================================SETTERS==============================//
void ScavTrap::setHp(int hp) {
	HP = hp;
}

void ScavTrap::setEnergyPoint(int energyPoint) {
	_energy_point = energyPoint;
}

void ScavTrap::setName(const std::string &name) {
	Name = name;
}

void ScavTrap::setLevel(unsigned int level) {
	_level = level;
}
//==============================GETTERS===============================//

int ScavTrap::getHp() const {return (HP);}

int ScavTrap::getEnergyPoint() const {return (_energy_point);}

const std::string &ScavTrap::getName() const {return (Name);}

unsigned int ScavTrap::getLevel() const {return (_level);}

const unsigned int ScavTrap::getMaxEp() {return (MAX_EP);}

const unsigned int ScavTrap::getMeleeAttackDmg() {return (melee_attack_dmg);}

const unsigned int ScavTrap::getRangedAttackDmg() {return (ranged_attack_dmg);}

const unsigned int ScavTrap::getMaxHp() {return (MAX_HP);}

const unsigned int ScavTrap::getArmorReduction() {return (armor_reduction);}
