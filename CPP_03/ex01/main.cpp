#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap	model_1("Custodians");
	FragTrap	model_2("Ferrus Manus");
	model_1.vaulthunter_dot_exe("Horus");
	model_1.takeDamage(10);
	model_1.vaulthunter_dot_exe("Horus");
	model_1.vaulthunter_dot_exe("Horus");
	model_1.beRepaired(15);
	model_1.vaulthunter_dot_exe("Horus");
	model_1.vaulthunter_dot_exe("Horus");

//	model_2 = model_1;
	std::cout << model_2.getName() << std::endl;

	ScavTrap	model_3("Iiat");
	ScavTrap::challengeNewcomer();
	ScavTrap::challengeNewcomer();
	ScavTrap::challengeNewcomer();
	return (0);
}