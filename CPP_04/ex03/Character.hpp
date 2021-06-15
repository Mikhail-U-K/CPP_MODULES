#ifndef CPP_0_CHARACTER_HPP
#define CPP_0_CHARACTER_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter {
private:
	std::string		m_name;
	AMateria		*m_inventory[4];
	unsigned int	inv_count;
public:
	explicit Character(const std::string &name);
	virtual ~Character();
	Character& operator= (const Character &character);
	Character(const Character &copy);

	const std::string &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif
