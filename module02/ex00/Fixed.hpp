#ifndef CPP_PISCINE_FIXED_HPP
#define CPP_PISCINE_FIXED_HPP


class Fixed {
private:
	int number;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const Fixed &b);
	~Fixed();
	Fixed& operator= (const Fixed& fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif //CPP_PISCINE_FIXED_HPP
