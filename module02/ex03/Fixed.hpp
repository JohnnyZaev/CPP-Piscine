#ifndef CPP_PISCINE_FIXED_HPP
#define CPP_PISCINE_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int _number;
	static const int _bits = 8;
public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &b);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt( void ) const;
	float toFloat( void ) const;
};

std::ostream & operator<< (std::ostream &out, const Fixed &c);

#endif //CPP_PISCINE_FIXED_HPP
