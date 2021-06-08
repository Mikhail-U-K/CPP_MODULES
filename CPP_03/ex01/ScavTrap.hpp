#ifndef CPP_0_SCAVTRAP_HPP
#define CPP_0_SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>

class ScavTrap {
private:
	int				HP;
	int				_energy_point;
	std::string		Name;
	unsigned int	_level;

	static const unsigned int		MAX_EP = 50;
	static const unsigned int		melee_attack_dmg = 20;
	static const unsigned int		ranged_attack_dmg = 15;
	static const unsigned int		MAX_HP = 100;
	static const unsigned int		armor_reduction = 3;
public:
//==================Constructors and destructor=====================//

	explicit ScavTrap(const std::string& name);
	ScavTrap& operator= (const ScavTrap &scavTrap);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();

//================================SETTERS==============================//

	void setHp(int hp);
	void setEnergyPoint(int energyPoint);
	void setName(const std::string &name);
	void setLevel(unsigned int level);

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
//============================MemberFunctions=========================//
	static void	challengeNewcomer();
};

#endif //CPP_0_SCAVTRAP_HPP
