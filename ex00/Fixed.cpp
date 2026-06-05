#include "Fixed.hpp"
#include <iostream>

const int	Fixed::_fract = 8;

Fixed::Fixed(void)
	: _rawBit(0)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << GREEN << "Copy constructor called" << RESET << std::endl;
	*this = obj;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
	std::cout << GREEN << "Copy assignment operator called" << RESET << std::endl;
	if (this != &obj)
		this->_rawBit = obj.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << RED << "Desctructor called." << RESET << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_rawBit);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->_rawBit = raw;
}