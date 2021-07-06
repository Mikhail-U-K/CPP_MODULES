#include "iter.hpp"

int main()
{
	srand(time(0));
	int		length = 10;
	int		*pop = new int[length];
	std::string	*kek2 = new std::string[length];

	for (int i = 0; i < length; ++i)
		pop[i] = 0;
	for (int i = 0; i < length; ++i)
		kek2[i] = 'A';
	iter(&pop, length, plus);
	for (int i = 0; i < length; ++i)
		std::cout << pop[i] << std::endl;
	iter(&kek2, length, plus_str);
	for (int i = 0; i < length; ++i)
		std::cout << kek2[i] << std::endl;
	return (0);
}
