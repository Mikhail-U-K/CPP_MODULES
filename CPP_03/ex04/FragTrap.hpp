#ifndef CPP_0_FRAGTRAP_HPP
#define CPP_0_FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : virtual public	ClapTrap {
public:
//==================Constructors and destructor=====================//

	FragTrap();
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
