#ifndef CPP_0_PHONEBOOK_HPP
#define CPP_0_PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include <cstdlib>

class Phonebook	{
private:
	Contact contacts[8];
public:
	void fill_contact(const std::string& line, int index, int string_number);

	Contact getContacts(int index) const;
	void search(int quantity);
	void get_contact_info(int contact_number) const;
};

#endif
