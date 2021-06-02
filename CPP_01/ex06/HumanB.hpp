#ifndef CPP_0_HUMANB_HPP
#define CPP_0_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string	name;
	Weapon		*weapon;
public:
	void	attack();
	HumanB(const std::string& name);

	Weapon *getWeapon() const;
	void setWeapon(Weapon &weapon);
};


#endif
