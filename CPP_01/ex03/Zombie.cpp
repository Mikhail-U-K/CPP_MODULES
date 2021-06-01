#include "Zombie.hpp"

void Zombie::announce() {
	std::cout << this->name << " <" << this->type << "> " << "Braiiiiiinnnnnnssssss.........." << std::endl;
}

const std::string &Zombie::getType() const {
	return (type);
}

void Zombie::setType(const std::string &zombie_type) {
	Zombie::type = zombie_type;
}

const std::string &Zombie::getName() const {
	return (name);
}

void Zombie::setName(const std::string &zombie_name) {
	Zombie::name = zombie_name;
}

Zombie::~Zombie() {
	std::cout << "** Zombie " << this->name << " <" << this->type <<  "> has been destroyed **" << std::endl;
}

Zombie::Zombie(const std::string &type, const std::string &name) : name(name), type(type) {
}

