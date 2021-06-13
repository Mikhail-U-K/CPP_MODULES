#ifndef CPP_0_SUPERMUTANT_HPP
#define CPP_0_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : virtual public Enemy {
public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(const SuperMutant &copy);
	SuperMutant& operator= (const SuperMutant &superMutant);
	virtual void takeDamage(int damage);
};

#endif
