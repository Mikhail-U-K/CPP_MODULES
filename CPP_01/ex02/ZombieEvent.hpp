#ifndef CPP_0_ZOMBIEEVENT_HPP
#define CPP_0_ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
public:
	static void			setZombieType(Zombie *zombie, const std::string& type);
	static Zombie		*newZombie(const std::string& name);
	static std::string	random_name();
	static void			randomChump();
};

#endif
