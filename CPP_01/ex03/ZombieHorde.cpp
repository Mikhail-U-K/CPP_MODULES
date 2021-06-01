#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <cstdlib>

std::string ZombieHorde::random_name() {
	std::string names[10] = {"NoName",
	"Bobby",
	"DeadInside",
	"Ghoul",
	"RobLuci",
	"ABOBA",
	"LittleAbObA",
	"BIG aBoBa",
	"Linear regression",
	"Artificial intelligence"};

	return (names[rand() % 10]);
}

ZombieHorde::ZombieHorde(int N)
{
	number_of_zombies = N;
	for (int i = 0; i < N; ++i)
	{
		zombie[i] = new Zombie("DeadInside", ZombieHorde::random_name());
		zombie[i]->announce();
	}
}

ZombieHorde::~ZombieHorde() {
	for (int i = 0; i < number_of_zombies; ++i) {
		delete(zombie[i]);
	}
	std::cout << "** ZombieHorde has been destroyed **" << std::endl;
}
