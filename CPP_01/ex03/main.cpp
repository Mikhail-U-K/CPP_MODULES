#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde *zombie = new ZombieHorde(10);

	delete(zombie);
	return (0);
}