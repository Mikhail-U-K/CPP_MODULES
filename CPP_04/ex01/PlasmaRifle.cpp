#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon(){
	name = "Plasma Rifle";
	damage = 21;
	AP = 5;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) {
	*this = copy;
}

PlasmaRifle &PlasmaRifle::operator= (const PlasmaRifle &plasmaRifle) {
	if (this == &plasmaRifle)
		return (*this);
	name = plasmaRifle.name;
	damage = plasmaRifle.damage;
	AP = plasmaRifle.AP;
	return (*this);
}

PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}


