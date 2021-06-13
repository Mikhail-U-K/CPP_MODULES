#ifndef CPP_0_ASSAULTTERMINATOR_HPP
#define CPP_0_ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine{
public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};


#endif
