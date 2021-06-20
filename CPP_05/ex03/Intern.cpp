#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Form	*create_shrub_form(const std::string &rasb_name)
{
	return (new ShrubberyCreationForm(rasb_name));
}

Form	*create_robo_form(const std::string &robo_name)
{
	return (new RobotomyRequestForm(robo_name));
}

Form	*create_pres_form(const std::string &pres_name)
{
	return (new PresidentialPardonForm(pres_name));
}

Intern::Intern() {
	t_form[0].form_name = "ShrubberyCreationForm";
	t_form[0].form_creation = create_shrub_form;
	t_form[1].form_name = "PresidentialPardonForm";
	t_form[1].form_creation = create_pres_form;
	t_form[2].form_name = "RobotomyRequestForm";
	t_form[2].form_creation = create_robo_form;
}

Intern::~Intern() {}

Form *Intern::makeForm(const std::string &form_name, const std::string &form_target) {
	for (int i = 0; i < 3; ++i) {
		if (t_form[i].form_name == form_name)
		{
			std::cout << "Intern creates " << form_name << std::endl;
			return (t_form[i].form_creation(form_target));
		}
	}
	throw (NoSuchFormException());
}