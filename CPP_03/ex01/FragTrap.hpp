#ifndef CPP_0_FRAGTRAP_HPP
#define CPP_0_FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>

class FragTrap {
private:
	int				HP;
	int				_energy_point;
	std::string		Name;
	unsigned int	_level;

	static const unsigned int		MAX_EP = 100;
	static const unsigned int		melee_attack_dmg = 30;
	static const unsigned int		ranged_attack_dmg = 20;
	static const unsigned int		MAX_HP = 100;
	static const unsigned int		armor_reduction = 5;
public:
//==================Constructors and destructor=====================//

	explicit FragTrap(const std::string& name);
	FragTrap& operator= (const FragTrap &fragTrap);
	FragTrap(const FragTrap &copy);
	~FragTrap();

//=========================Member functions==========================//

	void	rangedAttack(std::string const &target);
	void	meleeAttack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const &target);

//==============================GETTERS===============================//

	int getHp() const;
	int getEnergyPoint() const;
	const std::string &getName() const;
	unsigned int getLevel() const;
	static const unsigned int getMaxEp();
	static const unsigned int getMeleeAttackDmg();
	static const unsigned int getRangedAttackDmg();
	static const unsigned int getMaxHp();
	static const unsigned int getArmorReduction();

//================================SETTERS==============================//

	void setHp(int hp);
	void setEnergyPoint(int energyPoint);
	void setName(const std::string &name);
	void setLevel(unsigned int level);
};


#endif
