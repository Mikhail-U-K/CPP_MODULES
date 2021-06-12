#include "Victim.hpp"

Victim::Victim(const std::string &victim_name) {
	name = victim_name;
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << name <<  " just died for no apparent reason!" << std::endl;
}

Victim::Victim(const Victim &copy) {
	*this = copy;
}

Victim &Victim::operator= (const Victim &Victim) {
	if (this == &Victim)
		return (*this);
	name = Victim.getName();
	return (*this);
}

const std::string &Victim::getName() const {
	return (name);
}

void Victim::getPolymorphed() const {
	std::cout << getName() << " has been turned into a cute little sheep!" << std::endl;
}

Victim::Victim() {}

void Victim::setName(const std::string &Name) {
	Victim::name = Name;
}

std::ostream& operator<< (std::ostream &out, const Victim &reference){
	out << "I am " << reference.getName() << " and I like otters!" << std::endl;
	return (out);
}
