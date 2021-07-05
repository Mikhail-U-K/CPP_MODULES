#include "span.hpp"

int main()
{
	try {
		Span sp = Span(5);
		sp.addNumber(4);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(15);
		sp.addNumber(20);
		sp.addNumber(20);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
