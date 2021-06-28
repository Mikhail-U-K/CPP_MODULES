#include "Form.hpp"

const std::string &Form::getFName() const {
	return (f_name);
}

bool Form::isSignStatus() const {
	return (sign_status);
}

uint Form::getGradeToSign() const {
	return (grade_to_sign);
}

uint Form::getGradeToExecute() const {
	return (grade_to_execute);
}

Form::Form(const std::string &name, int gradetosign, int gradetoexec) : f_name(name), sign_status(false), grade_to_sign(gradetosign),
grade_to_execute(gradetoexec) {
	if (gradetosign > 150 || gradetoexec > 150)
		throw (GradeTooLowException());
	else if (gradetosign < 1 || gradetoexec < 1)
		throw (GradeTooHighException());

}

Form::Form(const Form &copy) : f_name(copy.f_name), sign_status(copy.sign_status), grade_to_sign (copy.grade_to_sign), grade_to_execute(copy.grade_to_execute) {}

Form &Form::operator= (const Form &form) {
	if (this == &form)
		return (*this);
	sign_status = form.sign_status;
	return (*this);
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getMGrade() <= grade_to_sign)
		sign_status = true;
	else
		throw (GradeTooLowException());
}

std::ostream& operator<< (std::ostream &out, const Form &form) {
	out << form.getFName() << " form is ";
	if (form.isSignStatus())
		out << " signed already.";
	else
		out << " not signed yet.";
	out << " Needed a grade to sign " << form.getGradeToSign() << ", to execute " << form.getGradeToExecute() << std::endl;
	return (out);
}

