#ifndef CPP_0_ENEMY_HPP
#define CPP_0_ENEMY_HPP

#include <iostream>

class Enemy {
protected:
	int			HP;
	std::string	type;
public:
	Enemy();
	Enemy(int hp, std::string const & Type);
	virtual ~Enemy();
	Enemy& operator= (const Enemy &enemy);

	int getHp() const;
	const std::string &getType() const;
	virtual void takeDamage(int);
};

#endif
