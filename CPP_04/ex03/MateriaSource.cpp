#include "MateriaSource.hpp"

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i)
		if (types[i])
			delete (types[i]);
}

MateriaSource::MateriaSource() {
	type_count = 0;
	for (int i = 0; i < 4; ++i)
		types[i] = nullptr;
}

void MateriaSource::learnMateria(AMateria *m) {
	if (type_count < 4)
	{
		types[type_count] = m;
		++type_count;
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < (int)type_count; ++i)
		if (types[i] && types[i]->getType() == type)
			return (types[i]->clone());
	return (nullptr);
}
