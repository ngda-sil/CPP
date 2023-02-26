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
		
			bool operator>(const Fixed &f) const;
			bool operator<(const Fixed &f) const;
			bool operator>=(const Fixed &f) const;
			bool operator<=(const Fixed &f) const;
			bool operator==(const Fixed &f) const;
			bool operator!=(const Fixed &f) const;

			Fixed operator=(const Fixed &f);
			Fixed operator+(const Fixed &f) const;
			Fixed operator-(const Fixed &f) const;
			Fixed operator*(const Fixed &f) const;
			Fixed operator/(const Fixed &f) const;
			
			Fixed& operator++(void); //prefix incrementation
			Fixed operator++(int i); //postfix incrementation
			Fixed& operator--(void); //prefix decrementation
			Fixed operator--(int i); //postfix decrementation
			
			~Fixed(void);

			static float min(Fixed &f1, Fixed &f2);
			static float min(const Fixed &f1, const Fixed &f2);
			static float max(Fixed &f1, Fixed &f2);
			static float max(const Fixed &f1, const Fixed &f2);
		
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
