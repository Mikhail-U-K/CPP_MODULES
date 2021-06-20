#ifndef CPP_0_SHRUBBERYCREATIONFORM_HPP
#define CPP_0_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
	explicit ShrubberyCreationForm(const std::string &target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm& operator= (const ShrubberyCreationForm &shrubb);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);

	virtual void execute(Bureaucrat const &executor) const;
};


#endif
