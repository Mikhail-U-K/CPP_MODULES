#ifndef CPP_0_SUPERTRAP_HPP
#define CPP_0_SUPERTRAP_HPP

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap {
public:
	explicit SuperTrap(const std::string &name);
	virtual ~SuperTrap();
	SuperTrap& operator= (const SuperTrap &superTrap);
	SuperTrap(const SuperTrap &copy);

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
};


#endif
