#include <iostream>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	MutantStack<int> mutantStack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << "stack: " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	MutantStack<int>::reverse_iterator rev_iter = mstack.r_begin();
	while (rev_iter != mstack.r_end()) {
		std::cout << "reverse stack: " << *rev_iter << std::endl;
		++rev_iter;
	}
	mutantStack = mstack;
	MutantStack<int>::iterator it_2 = mutantStack.begin();
	while (it_2 != mutantStack.end())
	{
		std::cout << "assignation stack: " << *it_2 << std::endl;
		++it_2;
	}
	return (0);
}