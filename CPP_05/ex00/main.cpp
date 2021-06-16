#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat	bureaucrat_2("Loh", 100);
		for (int i = 0; i < 50; ++i) {
			bureaucrat_2.decrement();
		}
		std::cout << bureaucrat_2.getMGrade() << std::endl;
		for (int i = 0; i < 150; ++i) {
			bureaucrat_2.increment();
		}
		std::cout << bureaucrat_2.getMGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}