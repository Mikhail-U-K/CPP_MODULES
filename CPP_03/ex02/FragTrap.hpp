#ifndef CPP_0_FRAGTRAP_HPP
#define CPP_0_FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : public	ClapTrap{
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

	explicit FragTrap(const std::string& name);
	FragTrap& operator= (const FragTrap &fragTrap);
	FragTrap(const FragTrap &copy);
	~FragTrap();

//=========================Member functions==========================//

	void	vaulthunter_dot_exe(std::string const &target);
};


#endif
