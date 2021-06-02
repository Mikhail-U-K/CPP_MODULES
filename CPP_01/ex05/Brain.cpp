#include "Brain.hpp"

std::string Brain::identify(){
	std::ostringstream get_address;

	get_address << this;
	return (get_address.str());
}
