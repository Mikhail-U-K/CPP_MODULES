#ifndef CPP_0_SCAVTRAP_HPP
#define CPP_0_SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
private:
	int				HP;
	int				_energy_point;
	std::string		Name;
	unsigned int	_level;

	unsigned int		MAX_EP;
	unsigned int		melee_attack_dmg;
	unsigned int		ranged_attack_dmg;
	unsigned int		MAX_HP;
	unsigned int		armor_reduction;
public:
//==================Constructors and destructor=====================//

	explicit ScavTrap(const std::string& name);
	ScavTrap& operator= (const ScavTrap &scavTrap);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();

//============================MemberFunctions=========================//
	void	challengeNewcomer();
};

#endif
