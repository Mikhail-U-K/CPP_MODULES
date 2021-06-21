#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &copy) {
	*this = copy;
}

Cure::~Cure() {}

Cure &Cure::operator= (const Cure &cure) {
	if (this == &cure)
		return (*this);
	type = cure.type;
	_xp = cure._xp;
	return (*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}

AMateria *Cure::clone() const {
	AMateria *materia = new Cure;
	return (materia);
}