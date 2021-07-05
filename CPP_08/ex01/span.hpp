#ifndef CPP_0_SPAN_HPP
#define CPP_0_SPAN_HPP

#include <vector>
#include <iostream>
#include <exception>

class Span {
private:
	unsigned int		m_num;
	std::vector<int>	span_array;
public:
	explicit Span(unsigned int N);
	~Span();
	Span(const Span &copy);
	Span& operator= (const Span & span);

	void	addNumber(const int &number);
	int		longestSpan();
	int		shortestSpan();
	class ArrayIsFull : public std::exception {
		public:
		virtual const char *what() const throw() { return("Array is full"); }
	};
	class ArrayIsEmpty : public std::exception {
	public:
		virtual const char *what() const throw() { return("Array is empty!"); }
	};
};


#endif