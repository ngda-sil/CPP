#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
			Fixed(void);
			Fixed(const Fixed &f);

			Fixed(const int i);
			Fixed(const float f);

			Fixed operator=(const Fixed &f);
			~Fixed(void);

			int		toInt(void) const;
			float	toFloat(void) const;

			int		getRawBits(void) const;
			void	setRawBits(int const raw);

	private:
			int					_value;
			static const int	_s_pos_point = 8;
};

std::ostream& operator<<(std::ostream& o, Fixed const &f);

#endif
