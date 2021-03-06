#include <iomanip>
#include "Phonebook.hpp"

void	messages(int index)
{
	if(index == 0)
		std::cout << "Enter first name: ";
	else if(index == 1)
		std::cout << "Enter last name: ";
	else if(index == 2)
		std::cout << "Enter nickname: ";
	else if(index == 3)
		std::cout << "Enter login: ";
	else if(index == 4)
		std::cout << "Enter postal address: ";
	else if(index == 5)
		std::cout << "Enter email address : ";
	else if(index == 6)
		std::cout << "Enter phone number: ";
	else if(index == 7)
		std::cout << "Enter birthday date: ";
	else if(index == 8)
		std::cout << "Enter favorite meal: ";
	else if(index == 9)
		std::cout << "Enter underwear color: ";
	else if(index == 10)
		std::cout << "Enter darkest secret: ";
}

int		main()
{
	Phonebook		_phone_book;
	std::string		user_input;
	int				j(0);

	std::cout << "Execute one of the following commands: SEARCH to see contact info/EXIT to quit/ADD to add contact" << std::endl;
	while(!std::cin.eof())
	{
		std::getline(std::cin, user_input);
		if(user_input == "EXIT")
			break ;
		else if(user_input == "ADD" && j < 8)
		{
			for(int k = 0; k < 11; k++)
			{
				messages(k);
				std::getline(std::cin, user_input);
				if (std::cin.eof())
					return (0);
				_phone_book.fill_contact(user_input, j, k);
			}
			j++;
		}
		else if(user_input == "SEARCH")
		{
			_phone_book.search(j);
		}
		else if (!std::cin.eof())
		{
			std::cout << "Execute one of the following commands: SEARCH to see contact info/EXIT to quit/ADD to add contact" << std::endl;
			if (j >= 8)
				std::cout << "Your phonebook might be full" << std::endl;
			continue ;
		}
		if(user_input == "ADD" && j == 7)
			std::cout << "Your Phonebook is full!!" << std::endl;
		user_input = "";
	}
	return (0);
}
