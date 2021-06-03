#ifndef CPP_0_FIXED_HPP
#define CPP_0_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int					_fixed_point_value;
	static const int	_num_of_frac_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	explicit Fixed(int a);
	explicit Fixed(float b);

	float	toFloat() const;
	int		toInt() const;
	Fixed& operator= (const Fixed &fixed);
	int		getRawBits() const;
	void	setRawBits(int raw);
};

	std::ostream& operator<< (std::ostream &out, const Fixed &reference);


#endif
