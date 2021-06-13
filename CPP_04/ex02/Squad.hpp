#ifndef CPP_0_SQUAD_HPP
#define CPP_0_SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>

class Squad : public ISquad{
private:
	struct s_squad
	{
		ISpaceMarine	*squad_member;
		s_squad			*next;
		s_squad(ISpaceMarine *new_marine, s_squad *);
	};
	s_squad		*head;
public:
	virtual ~Squad();
	Squad();
	Squad(const Squad &copy);
	Squad& operator= (const Squad &squad);
	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int) const;
	virtual int push(ISpaceMarine*);
};

#endif
