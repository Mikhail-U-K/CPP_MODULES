#ifndef CPP_0_PLASMARIFLE_HPP
#define CPP_0_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon {
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &copy);
	PlasmaRifle& operator= (const PlasmaRifle &plasmaRifle);
	virtual ~PlasmaRifle();
	virtual void attack() const;
};


#endif //CPP_0_PLASMARIFLE_HPP
