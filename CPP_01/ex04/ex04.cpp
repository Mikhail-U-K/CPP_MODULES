#include <iostream>

int main()
{
	std::string	brains = "HI THIS IS BRAIN";
	std::string *pointer;
	std::string &reference = brains;

	pointer = &brains;
	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;

	return (0);
}