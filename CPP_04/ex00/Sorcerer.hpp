#ifndef CPP_0_SORCERER_HPP
#define CPP_0_SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
private:
	std::string	name;
	std::string title;
public:
	Sorcerer(const std::string &sorcerer_name, const std::string &sorcerer_title);
	virtual ~Sorcerer();
	Sorcerer(const Sorcerer &copy);
	Sorcerer& operator= (const Sorcerer &sorcerer);

	const std::string &getName() const;
	const std::string &getTitle() const;
	void polymorph(Victim const &victim);
};

std::ostream& operator<< (std::ostream &out, const Sorcerer &reference);

#endif //CPP_0_SORCERER_HPP
