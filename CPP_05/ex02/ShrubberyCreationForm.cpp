#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shrubb) {
	if (this == &shrubb)
		return (*this);
	f_target = shrubb.f_target;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	Form::execute(executor);
	std::ofstream outputfile(f_target + "_shrubbery");
	if (!outputfile.is_open())
		throw std::runtime_error("can't open the file");
	outputfile << "\n"
				  "          .     .  .      +     .      .          .\n"
				  "     .       .      .     #       .           .\n"
				  "        .      .         ###            .      .      .\n"
				  "      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
				  "          .      . \"####\"###\"####\"  .\n"
				  "       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
				  "  .             \"#########\"#########\"        .        .\n"
				  "        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
				  "     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
				  "                .\"##\"#####\"#####\"##\"           .      .\n"
				  "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
				  "      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
				  "    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
				  "            .     \"      000      \"    .     .\n"
				  "       .         .   .   000     .        .       .\n"
				  ".. .. ..................O000O........................ ...... ..." << std::endl;
	outputfile.close();
}

