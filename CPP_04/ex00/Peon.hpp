#ifndef CPP_0_PEON_HPP
#define CPP_0_PEON_HPP

#include "Victim.hpp"

class Peon : virtual public Victim {
public:
	explicit Peon(const std::string &Name);
	virtual ~Peon();
	Peon& operator= (const Peon &peon);
	Peon(const Peon &copy);
	virtual void getPolymorphed() const ;
};

std::ostream& operator<< (std::ostream &out, const Peon &reference);

#endif
