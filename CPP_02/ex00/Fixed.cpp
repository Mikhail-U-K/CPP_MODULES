#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_value = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	_fixed_point_value = copy.getRawBits();
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed_point_value);
}

void Fixed::setRawBits(const int raw) {
	_fixed_point_value = raw;
}

Fixed &Fixed::operator = (const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	_fixed_point_value = fixed.getRawBits();
	return (*this);
}
