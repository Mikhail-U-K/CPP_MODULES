#ifndef CPP_0_POWERFIST_HPP
#define CPP_0_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : virtual public AWeapon {
public:
	PowerFist();
	PowerFist(const PowerFist &copy);
	PowerFist& operator= (const PowerFist &powerFist);
	virtual ~PowerFist();
	virtual void attack() const;
};


#endif
