#include "Fixed.hpp"

Fixed::Fixed() {
	_number = 0;
}

Fixed::Fixed(const int number) {
	_number = number << _bits;
}

Fixed::Fixed(const float number) {
	_number = std::roundf(number * (1 << _bits));
}

Fixed::~Fixed() {
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	_number = fixed.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed &b) {
	*this = b;
}

int Fixed::getRawBits() const {
	return _number;
}

void Fixed::setRawBits(const int raw) {
	_number = raw;
}

int Fixed::toInt() const {
	return (_number >> _bits);
}

float Fixed::toFloat( void ) const
{
	return  ((_number) / (float)(1 << _bits));
}

std::ostream & operator<< (std::ostream &out, const Fixed &c){
	return out << c.toFloat();
}

bool Fixed::operator<(const Fixed &other) const {
	return (this->_number >> this->_bits < other._number >> this->_bits);
}

bool Fixed::operator<=(const Fixed &other) const {
	return (this->_number >> this->_bits <= other._number >> this->_bits);
}

bool Fixed::operator==(const Fixed &other) const {
	return (this->_number >> this->_bits == other._number >> this->_bits);
}

bool Fixed::operator>(const Fixed &other) const {
	return (this->_number >> this->_bits > other._number >> this->_bits);
}

bool Fixed::operator>=(const Fixed &other) const {
	return (this->_number >> this->_bits >= other._number >> this->_bits);
}

bool Fixed::operator!=(const Fixed &other) const {
	return (this->_number >> this->_bits != other._number >> this->_bits);
}

Fixed	&Fixed::operator++ ( void ) {
	++(this->_number);
	return (*this);
}

Fixed	&Fixed::operator-- ( void ) {
	--(this->_number);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed old(*this);
	++(this->_number);
	return (old);
}

Fixed Fixed::operator--(int) {
	Fixed old(*this);
	--(this->_number);
	return (old);
}

Fixed	Fixed::operator* ( const Fixed &other ) const {
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator+(const Fixed &other) const {
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const {
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const {
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (a <= b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return (a <= b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return (a >= b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return (a >= b ? a : b);
}