#ifndef CPP_0_MATERIASOURCE_HPP
#define CPP_0_MATERIASOURCE_HPP

#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria		*types[4];
	unsigned int	type_count;
public:
	MateriaSource();
	virtual ~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};


#endif
