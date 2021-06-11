#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
	srand(time(nullptr));
	FragTrap	model_1("ChikChok");
	FragTrap	model_2("Ferrus Manus");

	model_1.vaulthunter_dot_exe("Horus");
	model_1.takeDamage(10);
	model_1.vaulthunter_dot_exe("Horus");
	model_1.vaulthunter_dot_exe("Horus");
	model_1.beRepaired(15);
	model_1.vaulthunter_dot_exe("Horus");
	model_1.vaulthunter_dot_exe("Horus");

	model_2 = model_1;

	ScavTrap	model_3("Iiat");

	model_3.challengeNewcomer();
	model_3.takeDamage(10);
	model_3.challengeNewcomer();
	model_3.challengeNewcomer();
	model_3.beRepaired(15);
	return (0);
}