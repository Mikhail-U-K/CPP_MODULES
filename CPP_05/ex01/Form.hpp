#ifndef CPP_0_FORM_HPP
#define CPP_0_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string	f_name;
	bool				sign_status;
	const uint			grade_to_sign;
	const uint			grade_to_execute;
public:
	Form(const std::string &name, int gradetosign, int gradetoexec);
	~Form() {}
	Form(const Form &copy);
	Form& operator= (const Form &form);

	const std::string &getFName() const;
	bool isSignStatus() const;
	uint getGradeToSign() const;
	uint getGradeToExecute() const;

	void beSigned(const Bureaucrat &bureaucrat);
	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw() {return ("Grade too high!");}
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw() {return ("Grade too low!");}
	};
};

std::ostream& operator<< (std::ostream &out, const Form &form);
#endif
