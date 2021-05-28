#ifndef CPP_0_CONTACT_HPP
#define CPP_0_CONTACT_HPP

#include <iostream>

class Contact {
private:
	int				index;
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		login;
	std::string		postal_address;
	std::string		email_address;
	std::string		phone_number;
	std::string		birthday_date;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;
public:
	Contact();

	const int &getIndex() const;
	void setIndex(int index);

	const std::string &getFirstName() const;
	void setFirstName(const std::string &firstName);

	const std::string &getLastName() const;
	void setLastName(const std::string &lastName);

	const std::string &getNickname() const;
	void setNickname(const std::string &nickname);

	const std::string &getLogin() const;
	void setLogin(const std::string &login);

	const std::string &getPostalAddress() const;
	void setPostalAddress(const std::string &postalAddress);

	const std::string &getEmailAddress() const;
	void setEmailAddress(const std::string &emailAddress);

	const std::string &getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);

	const std::string &getBirthdayDate() const;
	void setBirthdayDate(const std::string &birthdayDate);

	const std::string &getFavoriteMeal() const;
	void setFavoriteMeal(const std::string &favoriteMeal);

	const std::string &getUnderwearColor() const;
	void setUnderwearColor(const std::string &underwearColor);

	const std::string &getDarkestSecret() const;
	void setDarkestSecret(const std::string &darkestSecret);
};

#endif
