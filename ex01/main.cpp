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

	while(!std::cin.eof())
	{
		std::cin >> user_input;
		if(user_input == "EXIT")
			break ;
		else if(user_input == "ADD" && j < 8)
		{
			for(int k = 0; k < 11; k++)
			{
				messages(k);
				std::cin >> user_input;
				_phone_book.fill_contact(user_input, j, k);
			}
			j++;
		}
		else if(user_input == "SEARCH")
			_phone_book.search(j);
		if(user_input == "ADD" && j == 8)
			std::cout << "Your Phonebook is full!!" << std::endl;
		user_input = "";
	}
	return (0);
}