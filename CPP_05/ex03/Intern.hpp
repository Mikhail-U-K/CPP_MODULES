#ifndef CPP_0_INTERN_HPP
#define CPP_0_INTERN_HPP

#include "Form.hpp"

class Intern {
private:
	struct s_form
	{
		std::string		form_name;
		Form			*(*form_creation)(const std::string &f_name);
	}		t_form[3];
public:
	Intern();
	~Intern();

	Form *makeForm(const std::string &form_name, const std::string &form_target);
	class NoSuchFormException : public std::exception {
	public:
		virtual const char *what() const throw() {return ("No such form!");}
	};
};


#endif