#ifndef CPP_0_RADSCORPION_HPP
#define CPP_0_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : virtual public Enemy {
public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(const RadScorpion &copy);
	RadScorpion& operator= (const RadScorpion &radScorpion);
	virtual void takeDamage(int damage);
};


#endif
