#ifndef CPP_0_HUMAN_HPP
#define CPP_0_HUMAN_HPP

#include "Brain.hpp"

class Human {
private:
	Brain brain;
public:
	std::string identify();
	Brain &getBrain();
	Human();
};

#endif
