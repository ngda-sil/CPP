#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(int const i);
		Fixed(float const f);
		Fixed(const Fixed& fixed);
		Fixed& operator=(Fixed const &fixed);
		~Fixed(void);

		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;

	private:
		int					_n;
		static const int	_s_point_pos = 8;

};

std::ostream & operator<<(std::ostream & os, Fixed const &fixed);

#endif
