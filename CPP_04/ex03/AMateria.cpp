#include "AMateria.hpp"

AMateria::AMateria(const std::string &materia_type) {
	_xp = 0;
	type = materia_type;
}

AMateria::~AMateria() {

}

AMateria::AMateria(const AMateria &copy) {
	*this = copy;
}

const std::string &AMateria::getType() const {
	return (type);
}

unsigned int AMateria::getXP() const {
	return (_xp);
}

void AMateria::use(ICharacter &) {
	_xp += 10;
}

AMateria &AMateria::operator= (const AMateria &materia) {
	if (this == &materia)
		return (*this);
	_xp = materia.getXP();
	type = materia.getType();
	return (*this);
}

AMateria::AMateria() {}
