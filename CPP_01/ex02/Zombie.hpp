#ifndef CPP_0_ZOMBIE_HPP
#define CPP_0_ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie {
private:
	std::string type;
	std::string name;
public:
	void	announce();

	const std::string &getType() const;
	void setType(const std::string &type);

	const std::string &getName() const;
	void setName(const std::string &name);

	Zombie();
	Zombie(const std::string &type, const std::string &name);
	~Zombie();
};


#endif
