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
protected:
	std::string			f_target;
public:
	Form(const std::string &name, int gradetosign, int gradetoexec);
	virtual ~Form() {}
	Form(const Form &copy);
	Form& operator= (const Form &form);

	const std::string &getFName() const;
	bool isSignStatus() const;
	uint getGradeToSign() const;
	uint getGradeToExecute() const;

	virtual void execute(Bureaucrat const &executor) const = 0;

	void beSigned(const Bureaucrat &bureaucrat);
	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw() {return ("Grade too high!");}
	};
	class NotSignedException : public std::exception {
	public:
		virtual const char *what() const throw() {return ("Form not signed");}
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw() {return ("Grade too low!");}
	};
	class ExecuteException : public std::exception {
	public:
		virtual const char *what() const throw() {return ("Not Enough grade to execute!");}
	};
};

std::ostream& operator<< (std::ostream &out, const Form &form);
#endif
