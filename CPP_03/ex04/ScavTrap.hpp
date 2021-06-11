#ifndef CPP_0_SCAVTRAP_HPP
#define CPP_0_SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
public:
//==================Constructors and destructor=====================//

	explicit ScavTrap(const std::string& name);
	ScavTrap& operator= (const ScavTrap &scavTrap);
	ScavTrap(const ScavTrap &copy);
	virtual ~ScavTrap();

//============================MemberFunctions=========================//

	void	challengeNewcomer();
	virtual void	rangedAttack(std::string const &target);
	virtual void	meleeAttack(std::string const &target);
	virtual void	takeDamage(int amount);
	virtual void	beRepaired(int amount);
};

#endif
