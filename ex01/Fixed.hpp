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

		float	toFloat(void) const;
		int		toInt(void) const;
		int	getRawBits() const;
		void setRawBits(int bits);

	private:
		int	_rawBits;
		static const int	_fract;
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif