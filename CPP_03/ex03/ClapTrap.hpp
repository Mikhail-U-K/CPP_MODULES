#ifndef CPP_0_CLAPTRAP_HPP
#define CPP_0_CLAPTRAP_HPP

#include <cstdint>
#include <iostream>

class ClapTrap {
//all kids will see it//
protected:
	int				HP;
	int				_energy_point;
	std::string		Name;
	int				_level;
	int				MAX_EP;
	int				melee_attack_dmg;
	int				ranged_attack_dmg;
	int				MAX_HP;
	int				armor_reduction;
public:
//==============================CONSTRUCTORS_AND_DESTRUCTORS==============================//

	ClapTrap();
	explicit ClapTrap(const std::string &name);
	ClapTrap& operator= (const ClapTrap &clapTrap);
	ClapTrap(const ClapTrap &copy);
	virtual ~ClapTrap();

//=====================================MEMBER_FUNCTIONS===================================//

	virtual void	rangedAttack(std::string const &target);
	virtual void	meleeAttack(std::string const &target);
	virtual void	takeDamage(int amount);
	virtual void	beRepaired(int amount);
};

#endif
