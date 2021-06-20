#ifndef CPP_0_ROBOTOMYREQUESTFORM_HPP
#define CPP_0_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	explicit RobotomyRequestForm(const std::string &target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm& operator= (const RobotomyRequestForm &roboform);
	RobotomyRequestForm(const RobotomyRequestForm &copy);

	virtual void execute(Bureaucrat const &executor) const;
};


#endif
