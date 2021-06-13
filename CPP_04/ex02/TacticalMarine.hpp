#ifndef CPP_0_TACTICALMARINE_HPP
#define CPP_0_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine();
	virtual ~TacticalMarine();
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
	virtual ISpaceMarine* clone() const;
};


#endif
