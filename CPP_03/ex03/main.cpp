#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand(time(nullptr));
	FragTrap	model_1("CHIchik");
	FragTrap	model_2("Ferrus Manus");
	ClapTrap	boss_of_the_gym("BOSS");

	model_1.meleeAttack("Bob");
	model_1.rangedAttack("Bob");
	model_1.vaulthunter_dot_exe("Horus");
	model_1.takeDamage(10);
	model_1.vaulthunter_dot_exe("Horus");
	model_1.vaulthunter_dot_exe("Horus");
	model_1.beRepaired(15);
	model_1.vaulthunter_dot_exe("Horus");
	model_1.vaulthunter_dot_exe("Horus");

	model_2 = model_1;

	ScavTrap	model_3("Iiat");

	model_3.meleeAttack("Gog");
	model_3.rangedAttack("Gog");
	model_3.challengeNewcomer();
	model_3.takeDamage(10);
	model_3.challengeNewcomer();
	model_3.challengeNewcomer();
	model_3.beRepaired(15);

	NinjaTrap	trap_ninja("Blopert");

	trap_ninja.ninjaShoebox(boss_of_the_gym);
	trap_ninja.ninjaShoebox(model_1);
	trap_ninja.ninjaShoebox(model_3);
	trap_ninja.ninjaShoebox(trap_ninja);
	return (0);
}