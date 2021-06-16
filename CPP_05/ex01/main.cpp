#include "Bureaucrat.hpp"

//int main()
//{
//	try
//	{
//		Bureaucrat	bureaucrat_2("Loh", 100);
//		for (int i = 0; i < 50; ++i) {
//			bureaucrat_2.decrement();
//		}
//		std::cout << bureaucrat_2.getMGrade() << std::endl;
//		for (int i = 0; i < 50; ++i) {
//			bureaucrat_2.increment();
//		}
//		std::cout << bureaucrat_2.getMGrade() << std::endl;
//	}
//	catch (std::exception &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//	return (0);
//}


int main() {

	try{
		Bureaucrat a("Name", 70);
		std::cout << a;
		a.decrement();
		std::cout << a;
//		Form		c("Name_form", 151, 151);
//		Form		c("Name_form", 0, 0);
		Form		b("Name_form", 80, 80);
		a.signForm(b);
	}
	catch (std::exception &e) {std::cout <<e.what()<< std::endl;}
	return 0;
}