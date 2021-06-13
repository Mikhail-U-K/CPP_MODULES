#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"

//int main()
//{
//	PlasmaRifle rifle;
//	PowerFist fist;
//	Enemy enemy;
//	SuperMutant mutant;
//
//	rifle.attack();
//	fist.attack();
//	mutant.takeDamage(15);
//	std::cout << mutant.getHp() << std::endl;
////	rifle = rifle1;
//	std::cout << fist.getName() << " " << fist.getAp() << " " << fist.getDamage() << std::endl;
//	std::cout << rifle.getName() << " " << rifle.getAp() << " " << rifle.getDamage() << std::endl;
//	return (0);
//}

int main()
{
	Character *me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	//RadScorpion dies so any further actions with enemy (b) makes no sense
	//because it doesn't exist anymore)
	return (0);
}