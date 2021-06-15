#include <iostream>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

//int main()
//{
//	IMateriaSource* src = new MateriaSource();
//	src->learnMateria(new Ice());
//	src->learnMateria(new Cure());
//	ICharacter* me = new Character("me");
//	AMateria* tmp;
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	me->unequip(2);
//	me->unequip(3);
////	Character bob(*(Character*)me);
//	ICharacter* bob = new Character("bob");
//	me->use(0, *bob);
//	me->use(1, *bob);
//	me->use(2, *bob);
//	me->use(3, *bob);
////	*bob = *me;
//	delete bob;
//	delete me;
//	delete src;
////	while(1);
//	return (0);
//}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete (bob);
	delete (me);
	delete (src);
	return (0);
}