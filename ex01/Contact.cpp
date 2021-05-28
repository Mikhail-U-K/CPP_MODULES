#include "Contact.hpp"

const std::string &Contact::getFirstName() const {
	return first_name;
}

void Contact::setFirstName(const std::string &firstName) {
	first_name = firstName;
}

const std::string &Contact::getLastName() const {
	return last_name;
}

void Contact::setLastName(const std::string &lastName) {
	last_name = lastName;
}

const std::string &Contact::getNickname() const {
	return nickname;
}

void Contact::setNickname(const std::string &nickname) {
	Contact::nickname = nickname;
}

const std::string &Contact::getLogin() const {
	return login;
}

void Contact::setLogin(const std::string &login) {
	Contact::login = login;
}

const std::string &Contact::getPostalAddress() const {
	return postal_address;
}

void Contact::setPostalAddress(const std::string &postalAddress) {
	postal_address = postalAddress;
}

const std::string &Contact::getEmailAddress() const {
	return email_address;
}

void Contact::setEmailAddress(const std::string &emailAddress) {
	email_address = emailAddress;
}

const std::string &Contact::getPhoneNumber() const {
	return phone_number;
}

void Contact::setPhoneNumber(const std::string &phoneNumber) {
	phone_number = phoneNumber;
}

const std::string &Contact::getBirthdayDate() const {
	return birthday_date;
}

void Contact::setBirthdayDate(const std::string &birthdayDate) {
	birthday_date = birthdayDate;
}

const std::string &Contact::getFavoriteMeal() const {
	return favorite_meal;
}

void Contact::setFavoriteMeal(const std::string &favoriteMeal) {
	favorite_meal = favoriteMeal;
}

const std::string &Contact::getUnderwearColor() const {
	return underwear_color;
}

void Contact::setUnderwearColor(const std::string &underwearColor) {
	underwear_color = underwearColor;
}

const std::string &Contact::getDarkestSecret() const {
	return darkest_secret;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
	darkest_secret = darkestSecret;
}

const int &Contact::getIndex() const {
	return index;
}

void Contact::setIndex(int index) {
	this->index = index;
}

Contact::Contact() : index(0) {
}
