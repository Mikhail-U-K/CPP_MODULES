#ifndef CPP_0_AMATERIA_HPP
#define CPP_0_AMATERIA_HPP

#include "IMateriaSource.hpp"

class AMateria {
protected:
	unsigned int	_xp;
	std::string		type;
public:
	AMateria();
	explicit AMateria(std::string const &materia_type);
	virtual ~AMateria();
	AMateria(const AMateria &copy);
	AMateria& operator= (const AMateria &materia);

	const std::string &getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
