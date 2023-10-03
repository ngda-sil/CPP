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
				NONE	= 0,
				INF 	= 1,
				IS_NAN	= 2,			
				CHAR 	= 3,
				INT 	= 4,
				FLOAT 	= 5,
				DOUBLE 	= 6
			};
			
			static int detectType(std::string literal);

	public:
			
			static void convert(std::string literal);
};

#endif
