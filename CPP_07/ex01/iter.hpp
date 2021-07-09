#include <iostream>
#include <ctime>

template<typename T>
void	iter(T **array, uint array_length, void (*some_func)(T &))
{
	for (uint i = 0; i < array_length; ++i)
		some_func((*array)[i]);
}

void	plus(int &number) {number += 1;}

void	print_int_array(int &num)
{
	std::cout << num << std::endl;
}

void	print_string_array(std::string &str)
{
	std::cout << str << std::endl;
}