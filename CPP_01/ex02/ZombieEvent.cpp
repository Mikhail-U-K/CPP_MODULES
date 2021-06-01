#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(Zombie *zombie, const std::string& type) {
	zombie->setType(type);
}

Zombie *ZombieEvent::newZombie(const std::string& name) {
	return (new Zombie("DeadInside", name));
}

void ZombieEvent::randomChump() {
	Zombie	zombie("DeadInside", random_name());
	zombie.announce();
}

std::string ZombieEvent::random_name() {
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
