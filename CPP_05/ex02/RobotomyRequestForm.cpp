#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &) : Form("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &roboform) {
	if (this == &roboform)
		return (*this);
	f_target = roboform.f_target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy){}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << "*some drilling noises* " << f_target;
	if (rand() % 2)
		std::cout << " has been successfully robotomized" << std::endl;
	else
		std::cout << " has failed to be robotomized" << std::endl;
}


