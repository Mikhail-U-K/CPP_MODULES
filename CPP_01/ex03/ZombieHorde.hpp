#ifndef CPP_0_ZOMBIEHORDE_HPP
#define CPP_0_ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {
private:
	int		number_of_zombies;
	Zombie	*zombie[];
public:
	ZombieHorde(int N);
	static std::string	random_name();
	~ZombieHorde();
};

#endif
