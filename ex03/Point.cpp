#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void)
	: x(0), y(0)
{
	//std::cout << GREEN << "Default point constructor called" << RESET << std::endl;
}

Point::Point(const float a, const float b)
	: x(a), y(b)
{
	//std::cout << GREEN << "Point float constructor called" << RESET << std::endl;	
}
Point::Point(const Point& obj)
	: x(obj.getX().toFloat()),
	  y(obj.getY().toFloat())
{
	//std::cout << GREEN << "Pointer Copy constructor called" << RESET << std::endl;
}

Point& Point::operator=(const Point& obj)
{
	(void)obj;
	//std::cout << RED << "op = is called, forbidden. Point itself is returned." << RESET << std::endl;
	return (*this);
}
Point::~Point(void)
{
	//std::cout << RED << "Desctructor called." << RESET << std::endl;
}

const Fixed& Point::getX(void) const
{
	return (this->x);
}

const Fixed& Point::getY(void) const
{
	return (this->y);
}
