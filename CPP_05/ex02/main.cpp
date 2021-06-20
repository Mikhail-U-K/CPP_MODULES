#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try{
		Bureaucrat a("Name", 70);
		std::cout << a;
		a.decrement();
		std::cout << a;
		Form *b = new	ShrubberyCreationForm("tree");
		Form *c = new	RobotomyRequestForm("pupa");
		Form *d = new	PresidentialPardonForm("lupa");
		a.signForm(*b);
		a.signForm(*c);
		a.signForm(*d);
		c->execute(a);
		b->execute(a);
		d->execute(a);
	}
	catch (std::exception &e) {std::cout <<e.what()<< std::endl;}
	return (0);
}
