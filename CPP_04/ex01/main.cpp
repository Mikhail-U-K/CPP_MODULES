#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"

int main()
{
	PlasmaRifle rifle;
	PowerFist fist;
	Enemy enemy;
	SuperMutant mutant;

	rifle.attack();
	fist.attack();
	mutant.takeDamage(15);
	std::cout << mutant.getHp() << std::endl;
//	rifle = rifle1;
	std::cout << fist.getName() << " " << fist.getAp() << " " << fist.getDamage() << std::endl;
	std::cout << rifle.getName() << " " << rifle.getAp() << " " << rifle.getDamage() << std::endl;
	return (0);
}