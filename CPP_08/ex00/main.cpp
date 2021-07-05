#include "easyfind.hpp"
#include <vector>
#include <deque>

int main()
{
	std::vector<int> vec;
	std::vector<int>::iterator it_vec;
	for (int i = 0; i < 10; ++i)
		vec.push_back(20 - i);
	for (uint i = 0; i < vec.size(); ++i)
		std::cout << "vector:" << vec[i] << std::endl;
	it_vec = easyfind(vec, 15);
	std::cout << *easyfind(vec, 11) << std::endl;
	std::cout << *it_vec << std::endl;


	std::deque<double>	de_que;
	for (int i = 0; i < 5; ++i)
		de_que.push_back(20.0 - 0.5 * (double)i);
	for (uint i = 0; i < de_que.size(); ++i)
		std::cout << "deque" << de_que[i] << std::endl;
	std::cout << *easyfind(de_que, 18) << std::endl;
	return (0);
}
