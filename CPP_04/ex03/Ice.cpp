#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &copy) {
	*this = copy;
}

Ice::~Ice() {}

Ice &Ice::operator= (const Ice &copy) {
	if (this == &copy)
		return (*this);
	type = copy.type;
	_xp = copy._xp;
	return (*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

AMateria *Ice::clone() const {
	AMateria *materia = new Ice;
	return (materia);
}
