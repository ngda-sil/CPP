#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const integer);
		Fixed(float const floatNumber);
		Fixed(const Fixed& fixed);
		Fixed& operator=(Fixed const &fixed);
		~Fixed(void);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;

	private:
		int		_fixed;
		const int	_raw;

};

operator<<();
#endif
