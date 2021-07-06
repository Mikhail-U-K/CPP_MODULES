#include <iostream>
#include <ctime>

template<typename T>
void	iter(T **array, uint array_length, void (*some_func)(T &))
{
	for (uint i = 0; i < array_length; ++i)
		some_func((*array)[i]);
}

void	plus(int &number) {number += 1;}

void	plus_str(std::string &str) {
	char	c;
	uint	index = rand() % 30 + 10;
	uint	to_char = 126;
	uint	i = 0;
	for (; index; --index){
		if (to_char == 32)
			to_char = rand() % 126;
		to_char--;
		c = static_cast<char>(to_char);
		str[i] = c;
		i++;
	}
}
