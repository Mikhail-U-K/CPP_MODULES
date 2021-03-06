#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name,  unsigned int grade) {
	if (grade > 150)
		throw (GradeTooLowException());
	else if (grade < 1)
		throw (GradeTooHighException());
	m_name = name;
	m_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	if (this == &bureaucrat)
		return (*this);
	m_name = bureaucrat.m_name;
	m_grade = bureaucrat.m_grade;
	return (*this);
}

void Bureaucrat::increment() {
	m_grade -= 1;
	if (m_grade < 1)
		throw (GradeTooHighException());
}

void Bureaucrat::decrement() {
	m_grade += 1;
	if (m_grade > 150)
		throw (GradeTooLowException());
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getMName() << ", bureaucrat grade " << bureaucrat.getMGrade() << std::endl;
	return (out);
}
