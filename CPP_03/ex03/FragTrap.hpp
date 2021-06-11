#ifndef CPP_0_FRAGTRAP_HPP
#define CPP_0_FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : virtual public	ClapTrap{
private:
	int				HP;
	int				_energy_point;
	std::string		Name;
	int				_level;
	int					MAX_EP;
	int					melee_attack_dmg;
	int					ranged_attack_dmg;
	int					MAX_HP;
	int					armor_reduction;
public:
//==================Constructors and destructor=====================//

	explicit FragTrap(const std::string& name);
	FragTrap& operator= (const FragTrap &fragTrap);
	FragTrap(const FragTrap &copy);
	virtual ~FragTrap();

//=========================Member functions==========================//

	void			vaulthunter_dot_exe(std::string const &target);
	virtual void	rangedAttack(std::string const &target);
	virtual void	meleeAttack(std::string const &target);
	virtual void	takeDamage(int amount);
	virtual void	beRepaired(int amount);
};


#endif
