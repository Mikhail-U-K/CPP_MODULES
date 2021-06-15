#include "Character.hpp"

const std::string &Character::getName() const {
	return (m_name);
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3)
		return ;
	if (this->m_inventory[idx])
		m_inventory[idx]->use(target);
}

Character::~Character() {
	for (int i = 0; i < 4; ++i)
		if (m_inventory[i])
			delete (m_inventory[i]);
}

Character::Character(const std::string &name) {
	m_name = name;
	inv_count = 0;
	for (int i = 0; i < 4; ++i)
		m_inventory[i] = nullptr;
}

Character &Character::operator= (const Character &character) {
	if (this == &character)
		return (*this);
	m_name = character.m_name;
	inv_count = character.inv_count;
	for (int j = 0; j < 4; ++j)
		if (m_inventory[j])
			delete (m_inventory[j]);
	for (int i = 0; i < 4; ++i)
		m_inventory[i] = character.m_inventory[i]->clone();
	return (*this);
}

Character::Character(const Character &copy) {
	*this = copy;
}

void Character::equip(AMateria *m) {
	if (inv_count < 4)
	{
		m_inventory[inv_count] = m;
		++inv_count;
	}
}

void Character::unequip(int idx) {
	if (idx > 3 || idx < 0)
		return ;
	m_inventory[idx] = nullptr;
	--inv_count;
	if (inv_count < 0)
		inv_count = 0;
}
