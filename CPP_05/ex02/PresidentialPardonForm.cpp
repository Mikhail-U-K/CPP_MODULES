#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5) {
	f_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &pardonForm) {
	if (this == &pardonForm)
		return (*this);
	f_target = pardonForm.f_target;
	return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::cout << f_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}




