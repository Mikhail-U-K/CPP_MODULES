#ifndef CPP_0_NINJATRAP_HPP
#define CPP_0_NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
public:
//=========================CONSTRUCTORS==========================//

	NinjaTrap();
	explicit NinjaTrap(const std::string &name);
	virtual ~NinjaTrap();
	NinjaTrap(const NinjaTrap &copy);
	NinjaTrap& operator= (const NinjaTrap &ninjaTrap);

//=========================MEMBER_FUNCTIONS=====================//

	void	ninjaShoebox(const ClapTrap &clapTrap);
	void	ninjaShoebox(const NinjaTrap &ninjaTrap);
	void	ninjaShoebox(const ScavTrap &scavTrap);
	void	ninjaShoebox(const FragTrap &fragTrap);
};


#endif
