#ifndef CPP_0_PRESIDENTIALPARDONFORM_HPP
#define CPP_0_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	explicit PresidentialPardonForm(const std::string &target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	PresidentialPardonForm& operator= (const PresidentialPardonForm &pardonForm);
	virtual void execute(Bureaucrat const &executor) const;
};


#endif