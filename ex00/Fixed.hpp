#ifndef FIXED_HPP
#define FIXED_HPP

# define GREEN	"\033[32m"
# define RED	"\033[31m"
# define RESET	"\033[0m"

class Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& obj);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		
	private:
		int			_rawBit;
		static const int	_fract;	

};



#endif