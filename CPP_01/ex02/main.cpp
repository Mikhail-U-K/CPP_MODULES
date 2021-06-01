#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie	*zombie = ZombieEvent::newZombie(ZombieEvent::random_name());
	zombie->announce();
	delete(zombie);
	zombie = ZombieEvent::newZombie("Карабас");
	ZombieEvent::setZombieType(zombie, "Барабас");
	zombie->announce();
	delete(zombie);
	ZombieEvent::randomChump();
	return (0);
}