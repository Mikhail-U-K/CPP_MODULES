#ifndef CPP_0_ISPACEMARINE_HPP
#define CPP_0_ISPACEMARINE_HPP

class ISpaceMarine {
public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};

#endif
