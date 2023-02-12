#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed
{
	public:
		Fixed();
		Fixed(Fixed const & src);
		Fixed&	operator=(Fixed const & rhs);
		~Fixed();

		int		getRawBits(void) const;	
		void	setRawBits(int const raw);

	private:
		int			_RawBits;
		const int	_Fraction;
};

#endif
