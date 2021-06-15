#ifndef CPP_0_ICE_HPP
#define CPP_0_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice &ice);
	Ice& operator= (const Ice &copy);

	void use(ICharacter& target);
	AMateria* clone() const;
};

#endif
