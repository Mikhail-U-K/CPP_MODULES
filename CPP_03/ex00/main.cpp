//
// Created by Blinky Daedric on 6/4/21.
//

#include "FragTrap.hpp"

int main()
{
	FragTrap	_robot_1("ClapTrap");
	FragTrap	_robot_2("ABOBA");

	_robot_1.rangedAttack(_robot_2.getName());
	return (0);
}