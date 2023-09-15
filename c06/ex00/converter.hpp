#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <exception>
# include <iostream>
# include <string>
# include <iomanip>

# define RESET		"\033[0m"
# define RED		"\033[31m"

# define DOUBLE		1
# define FLOAT		2
class	Converter
{
	public:
			Converter(void);
			Converter(const Converter& rhs);
			Converter& operator=(const Converter& rhs);
			~Converter(void);
			
			std::string	getType() const;
			std::string getToConvert() const;
			char		getChar() const;
			int			getInt() const;
			float		getFloat() const;
			double		getDouble() const;

			void		setType(std::string type);

			void		convert(char* toConvert);
			void		printConversion() const;

	private:
			std::string _type;
			std::string _toConvert;

			char		_c;
			int			_i;
			float		_f; // peut-être define type float qui correspond à ce qui est demandé dans la consigne
			double		_d;
			
			int		_l;
			
			static  std::string	_limits[];

			int		setToConvert(char* str);

			int 	isLimit() const;
			bool	convertibleToChar() const;
			bool	convertibleToFloat() const;
			bool	convertibleToNb(const std::string) const;

			void	printChar() const;
			void	printInt() const;
			void	printFloat() const;
			void	printDouble() const;

			int		detectType();
			void	convertToTrueType();
			void	explicitConversion();
};

std::ostream& operator<<(std::ostream& o, Converter const &c);

// utils
int	checkArgs(int ac);

#endif
