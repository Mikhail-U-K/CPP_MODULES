#ifndef CPP_0_HUMANA_HPP
#define CPP_0_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	std::string	name;
	Weapon		&weapon;
public:
	void	attack();
	HumanA(const std::string& name, Weapon &weapon);
};


#endif
