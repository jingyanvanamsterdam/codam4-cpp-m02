#ifndef FIXED_HPP
#define FIXED_HPP

# define GREEN	"\033[32m"
# define RED	"\033[31m"
# define RESET	"\033[0m"

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(int nb);
		Fixed(float nb);
		Fixed(const Fixed& obj);
		~Fixed();

		bool operator>(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
		Fixed operator*(const Fixed& other);
		Fixed operator/(const Fixed& other);

		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits() const;
		void 	setRawBits(int bits);

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

	private:
		int	_rawBits;
		static const int	_fract;
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif