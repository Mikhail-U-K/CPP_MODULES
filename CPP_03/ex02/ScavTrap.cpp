#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap("Aboba"){
	Name = name;
	HP = 100;
	_energy_point = 50;
	_level = 1;
	MAX_EP = 50;
	MAX_HP = 100;
	melee_attack_dmg = 20;
	ranged_attack_dmg = 15;
	armor_reduction = 3;
	std::cout << "FR4G-TP <" << Name << "> Hey everybody! Check out my package!" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &scavTrap) {
	std::cout << "Unts unts unts unts!" << std::endl;
//	if (*this != scavTrap)
//	{
		HP = scavTrap.HP;
		_energy_point = scavTrap._energy_point;
		Name = scavTrap.Name;
		_level = scavTrap._level;
		armor_reduction = scavTrap.armor_reduction;
		MAX_HP = scavTrap.MAX_HP;
		MAX_EP = scavTrap.MAX_EP;
		melee_attack_dmg = scavTrap.melee_attack_dmg;
		ranged_attack_dmg = scavTrap.ranged_attack_dmg;
//	}
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &copy) {
	std::cout << "Psst! Ad-ass-bay, over ere-bay!" << std::endl;
//	ClapTrap("ABOBA");
	*this = copy;
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
