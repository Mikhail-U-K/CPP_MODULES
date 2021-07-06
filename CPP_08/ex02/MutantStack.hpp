#ifndef CPP_0_MUTANTSTACK_HPP
#define CPP_0_MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() {};
	~MutantStack() {};
	MutantStack(const MutantStack<T> &copy);
	MutantStack<T>& operator= (const MutantStack<T> &mutantStack);

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

	iterator			begin();
	iterator			end();
	reverse_iterator	r_begin();
	reverse_iterator	r_end();
};

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return (std::stack<T>::c.begin());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return (std::stack<T>::c.end());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::r_begin() {
	return (std::stack<T>::c.rbegin());
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::r_end() {
	return (std::stack<T>::c.rend());
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &mutantStack) {
	if (this != &mutantStack)
		std::stack<T>::operator= (mutantStack);
	return (*this);
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy) {
	*this = copy;
}

#endif
