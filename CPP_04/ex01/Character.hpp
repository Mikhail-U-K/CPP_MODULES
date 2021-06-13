#ifndef CPP_0_CHARACTER_HPP
#define CPP_0_CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
private:
	std::string	name;
	int			AP;
	AWeapon		*weapon;
public:
	explicit Character(std::string const &Name);
	~Character();
	Character(const Character &copy);
	Character& operator= (const Character &character);

	void	recoverAP();
	void	equip(AWeapon *);
	void	attack(Enemy *);

	const std::string &getName() const;
	int getAp() const;
	AWeapon *getWeapon() const;
};

std::ostream& operator<< (std::ostream &out, const Character &character);

#endif
