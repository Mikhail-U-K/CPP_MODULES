#ifndef CPP_0_FIXED_HPP
#define CPP_0_FIXED_HPP

#include <iostream>

class Fixed {
private:
	int					_fixed_point_value;
	static const int	_num_of_frac_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed& operator= (const Fixed &fixed);
	int		getRawBits() const;
	void	setRawBits(int const raw);
};


#endif
