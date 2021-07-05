#ifndef CPP_0_EASYFIND_HPP
#define CPP_0_EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

template<typename T>
typename T::iterator easyfind(T &cont, const int &needle)
{
	typename T::iterator	it;
	it = std::find(cont.begin(), cont.end(), needle);
	if (it == cont.end())
		throw std::invalid_argument("Couldn't find this element");
	return (it);
}

#endif
