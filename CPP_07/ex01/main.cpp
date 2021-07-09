#include "iter.hpp"

int main()
{
	srand(time(0));
	int		length = 5;
	int		*pop = new int[length];

	for (int i = 0; i < length; ++i)
		pop[i] = 0;
	iter(&pop, length, print_int_array);
	iter(&pop, length, plus);
	iter(&pop, length, print_int_array);
	std::string		*str_array = new std::string[5];

	for (int i = 0; i < 5; ++i)
		str_array[i] = ("A" + std::to_string(i));
	iter(&str_array, length, print_string_array);
	return (0);
}
