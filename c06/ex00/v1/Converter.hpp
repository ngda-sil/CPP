#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <exception>
# include <iostream>
# include <string>
# include <iomanip>
# include <cctype>

# define RESET		"\033[0m"
# define RED		"\033[31m"

# define DOUBLE		1
# define FLOAT		2

class	Converter
{
	public:
			
			std::string	getType() const;
			std::string getToConvert() const;
			char		getChar() const;
			int			getInt() const;
			float		getFloat() const;
			double		getDouble() const;

			void		setType(std::string type);

			static void	convert(std::string toConvert);
			static void	printConversion();

	private:
			Converter(void);
			Converter(const Converter& rhs);
			Converter& operator=(const Converter& rhs);
			~Converter(void);

			std::string _type;
			std::string _toConvert;

			static char		_c;
			static int		_i;
			static float	_f; // peut-être define type float qui correspond à ce qui est demandé dans la consigne
			static double	_d;
			
			static int		_l;
			
			static  std::string	_limits[];

			static int	setToConvert(std::string str);

			static int 	isLimit();
			static bool	convertibleToChar() ;
			static bool	convertibleToFloat() ;
			static bool	convertibleToNb(const std::string) ;

			static void	printChar() ;
			static void	printInt() ;
			static void	printFloat() ;
			static void	printDouble() ;

			static int	detectType();
			static void	convertToTrueType();
			static void	explicitConversion();
};

std::ostream& operator<<(std::ostream& o, Converter const &c);

// utils
int	checkArgs(int ac);

#endif
