#include "Phonebook.hpp"

void	Phonebook::fill_contact(const std::string &line, int index, int string_number)
{
	if (string_number == 0)
	{
		contacts[index].setFirstName(line);
		contacts[index].setIndex(index);
	}
	else if (string_number == 1)
		contacts[index].setLastName(line);
	else if (string_number == 2)
		contacts[index].setNickname(line);
	else if (string_number == 3)
		contacts[index].setLogin(line);
	else if (string_number == 4)
		contacts[index].setPostalAddress(line);
	else if (string_number == 5)
		contacts[index].setEmailAddress(line);
	else if (string_number == 6)
		contacts[index].setPhoneNumber(line);
	else if (string_number == 7)
		contacts[index].setBirthdayDate(line);
	else if (string_number == 8)
		contacts[index].setFavoriteMeal(line);
	else if (string_number == 9)
		contacts[index].setUnderwearColor(line);
	else if (string_number == 10)
		contacts[index].setDarkestSecret(line);
}

Contact Phonebook::getContacts(int index) const {
	return contacts[index];
}

void Phonebook::search(int quantity)
{
	std::string		user_input;
	int				j(0);

	if (quantity > 0)
	{
		std::cout << std::setw(10) << "#" << "|";
		std::cout << std::setw(10) << "First name" << "|";
		std::cout << std::setw(10) << "Last name" << "|";
		std::cout << std::setw(10) << "Nickname" << "|";
		std::cout << std::endl;
		for (int i = 0; i < quantity; i++)
		{
			std::cout << std::setw(10) << this->getContacts(i).getIndex() << "|";
			if (this->getContacts(i).getFirstName().length() > 10)
				std::cout << std::setw(9) << this->getContacts(i).getFirstName().substr(0, 9) << "." << "|";
			else
				std::cout << std::setw(10) << this->getContacts(i).getFirstName().substr(0, 10) << "|";
			if (this->getContacts(i).getLastName().length() > 10)
				std::cout << std::setw(9) << this->getContacts(i).getLastName().substr(0,9) << "." << "|";
			else
				std::cout << std::setw(10) << this->getContacts(i).getLastName().substr(0, 10) << "|";
			if (this->getContacts(i).getNickname().length() > 10)
				std::cout << std::setw(9) << this->getContacts(i).getNickname().substr(0,9) << "." << "|";
			else
				std::cout << std::setw(10) << this->getContacts(i).getNickname().substr(0, 10) << "|";
			std::cout << std::endl;
		}
		while (true)
		{
			std::cout << "Choose contact number to see full information" << std::endl;
			std::cin >> user_input;
			while (std::isdigit(user_input[j]))
				j++;
			if (user_input.length() == j)
			{
				if (std::atoi(user_input.c_str()) > quantity)
				{
					std::cout << "This contact is empty" << std::endl;
					break ;
				}
				this->get_contact_info(std::atoi(user_input.c_str()));
				break ;
			}
			else
				std::cout << "Please chose valid contact number" << std::endl;
		}
	}
	else
		std::cout << "Your Phonebook is empty" << std::endl;
}

void Phonebook::get_contact_info(int contact_number) const {
	std::cout << "First Name: " << this->getContacts(contact_number).getFirstName() << std::endl;
	std::cout << "Last Name: " << this->getContacts(contact_number).getLastName() << std::endl;
	std::cout << "Nickname: " << this->getContacts(contact_number).getNickname() << std::endl;
	std::cout << "Login: " << this->getContacts(contact_number).getLogin() << std::endl;
	std::cout << "Postal address: " << this->getContacts(contact_number).getPostalAddress() << std::endl;
	std::cout << "Email address: " << this->getContacts(contact_number).getEmailAddress() << std::endl;
	std::cout << "Phone number: " << this->getContacts(contact_number).getPhoneNumber() << std::endl;
	std::cout << "Birthday date: " << this->getContacts(contact_number).getBirthdayDate() << std::endl;
	std::cout << "Favorite meal: " << this->getContacts(contact_number).getFavoriteMeal() << std::endl;
	std::cout << "Underwear color: " << this->getContacts(contact_number).getUnderwearColor() << std::endl;
	std::cout << "Darkest secret: " << this->getContacts(contact_number).getLastName() << std::endl;
}




