#ifndef CPP_0_CURE_HPP
#define CPP_0_CURE_HPP

#include "AMateria.hpp"
#include "Character.hpp"

class Cure : public AMateria {
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure &cure);
	Cure& operator= (const Cure &copy);

	void use(ICharacter& target);
	AMateria* clone() const;
};


#endif
