#ifndef CPP_0_VICTIM_HPP
#define CPP_0_VICTIM_HPP

#include <iostream>

class Victim {
protected:
	std::string	name;
public:
	Victim();
	explicit Victim(const std::string &victim_name);
	~Victim();
	Victim(const Victim &copy);
	Victim& operator= (const Victim &Victim);

	virtual const std::string &getName() const;
	virtual void setName(const std::string &Name);

	virtual void getPolymorphed() const ;
};

std::ostream& operator<< (std::ostream &out, const Victim &reference);

#endif
