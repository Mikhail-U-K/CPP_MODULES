#ifndef CPP_0_BUREAUCRAT_HPP
#define CPP_0_BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {
private:
	std::string			m_name;
	unsigned int		m_grade;
	Bureaucrat() : m_grade(0) {}
public:
	Bureaucrat(const std::string &name, unsigned int grade);
	~Bureaucrat() {}
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat& operator= (const Bureaucrat &bureaucrat);

	void	increment();
	void	decrement();

	class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw() {return ("Grade too high!");}
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw() {return ("Grade too low!");}
	};
	const std::string &getMName() const {return (m_name);}
	unsigned int getMGrade() const {return (m_grade);}
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat);

#endif
