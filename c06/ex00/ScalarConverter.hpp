#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# define RESET		"\033[0m"
# define RED		"\033[31m"

# include <limits>
# include <sstream>
# include <iostream>
# include <cerrno>


class	ScalarConverter
{
	private:
			ScalarConverter(void);
			ScalarConverter(const ScalarConverter& rhs);
			ScalarConverter& operator=(const ScalarConverter& rhs);
			~ScalarConverter(void);

			enum dataType
			{
				CHAR 	= 0,
				INT 	= 1,
				FLOAT 	= 2,
				DOUBLE 	= 3,
				NONE	= 4		
			};
			

			int type;

			static int detectType(std::string literal);
			static void	convertToTrueType(std::string literal);
			static void	explicitConversion();
			static void	printConversion();


	public:
			
			static void convert(std::string literal);
};

#endif
