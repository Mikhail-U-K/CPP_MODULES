#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string& name, Weapon &weapon) : name(name), weapon(weapon){
}
