#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &Type) {
	HP = hp;
	type = Type;
}

Enemy::~Enemy() {}

int Enemy::getHp() const {
	return (HP);
}

const std::string &Enemy::getType() const {
	return (type);
}

Enemy::Enemy() {}

Enemy &Enemy::operator=(const Enemy &enemy) {
	if (this == &enemy)
		return (*this);
	HP = enemy.HP;
	type = enemy.type;
	return (*this);
}

void Enemy::takeDamage(int damage) {
	if (damage < 0)
		return ;
	HP = HP - damage;
}
