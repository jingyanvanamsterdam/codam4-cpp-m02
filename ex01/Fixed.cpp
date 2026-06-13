#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fract = 8;

//void test_print(int nb, std::string mes)
//{
//	std::cout << RED << mes << nb << std::endl;
//}

Fixed::Fixed(void)
	: _rawBits(0)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(int nb)
{
	std::cout << GREEN << "Int constructor called" << RESET << std::endl;
	this->_rawBits = nb * ( 1 << _fract);

	//test_print(this->_rawBits, "int rawbits: ");
}

Fixed::Fixed(float nb)
{
	std::cout << GREEN << "Float constructor called" << RESET << std::endl;

	this->_rawBits = roundf(nb * ( 1 << _fract));

	//test_print(this->_rawBits, "float rawbits: ");
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;

	this->_rawBits = obj.getRawBits();
	//test_print(this->_rawBits, "new raw bit: ");
}

Fixed::~Fixed()
{
	std::cout << RED << "Desctructor called." << RESET << std::endl;
}

float	Fixed::toFloat(void) const
{
	float res = (float)_rawBits / (1 << _fract);
	return res;
}

int		Fixed::toInt(void) const
{
	int res = _rawBits >> _fract;
	return res;
}

int Fixed::getRawBits(void) const
{
	return this->_rawBits;
}

void Fixed::setRawBits(int bits)
{
	this->_rawBits = bits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return out;
}
