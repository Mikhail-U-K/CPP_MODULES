#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony	little_pony;

	little_pony.setHairColor("brown");
	std::cout << "Little Pony's hair is " << little_pony.getHairColor() << std::endl;
	little_pony.setPonyAge(10);
	std::cout << "Little Pony's age is " << little_pony.getPonyAge() << std::endl;
	little_pony.setPonyWeight(50);
	std::cout << "Little Pony's weight is " << little_pony.getPonyWeight() << std::endl;
}

void	 ponyOnTheHeap()
{
	Pony	*big_pony = new Pony();

	big_pony->setPonyWeight(45);
	big_pony->setHairColor("white");
	big_pony->setPonyAge(8);
	std::cout << "Big Pony's hair is " << big_pony->getHairColor() << std::endl;
	std::cout << "Big Pony's weight is " << big_pony->getPonyWeight() << std::endl;
	std::cout << "Big Pony's age is " << big_pony->getPonyAge() << std::endl;
	delete(big_pony);
}

int	main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}