#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &sorcerer_name, const std::string &sorcerer_title) {
	name = sorcerer_name;
	title = sorcerer_title;
	std::cout << name << ", {" << title << "} is born" << std::endl;
}

Sorcerer::~Sorcerer() {
	std::cout << name << ", {" << title << "} is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer &Sorcerer::operator= (const Sorcerer &sorcerer) {
	name = sorcerer.name;
	title = sorcerer.title;
	return (*this);
}

Sorcerer::Sorcerer(const Sorcerer &copy) {
	*this = copy;
}

const std::string &Sorcerer::getName() const {
	return (name);
}

const std::string &Sorcerer::getTitle() const {
	return (title);
}

void Sorcerer::polymorph(const Victim &victim) {
	victim.getPolymorphed();
}

std::ostream& operator<<(std::ostream &out, const Sorcerer &reference) {
	out << "I am " << reference.getName() << " {" << reference.getTitle() << "}, and I like ponies" << std::endl;
	return (out);
}