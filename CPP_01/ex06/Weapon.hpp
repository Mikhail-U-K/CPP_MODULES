#ifndef CPP_0_WEAPON_HPP
#define CPP_0_WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string type;
public:
	const std::string &getType() const;
	void setType(const std::string &weapon_type);

	Weapon(const std::string&);
};


#endif
