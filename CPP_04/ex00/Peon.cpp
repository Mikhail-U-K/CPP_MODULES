#include "Peon.hpp"

Peon::Peon(const std::string &Name) : Victim(Name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon &Peon::operator= (const Peon &peon) {
	if (this == &peon)
		return (*this);
	name = peon.getName();
	return (*this);
}

void Peon::getPolymorphed() const {
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}

Peon::Peon(const Peon &copy) {
	*this = copy;
}

std::ostream& operator<< (std::ostream &out, const Peon &reference) {
	out << "I am " << reference.getName() << " and I like otters!" << std::endl;
	return (out);
}