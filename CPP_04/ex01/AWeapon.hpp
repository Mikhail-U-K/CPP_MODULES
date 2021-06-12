#ifndef CPP_0_AWEAPON_HPP
#define CPP_0_AWEAPON_HPP

#include <iostream>

class AWeapon {
protected:
	std::string		name;
	int				damage;
	int				AP;//action points
public:
	AWeapon();
	AWeapon(std::string const &weapon_name, int ap, int weapon_damage);
	virtual ~AWeapon();
	AWeapon& operator= (const AWeapon &copy);
	AWeapon(const AWeapon &weapon);

	const std::string &getName() const;

	int	getAp() const;
	int	getDamage() const;
	virtual void attack() const = 0;
};

#endif
