
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed &fixed);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_n;
		static int const	_s_point_pos = 8;
};

#endif
