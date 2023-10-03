#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# define RESET		"\033[0m"
# define RED		"\033[31m"

# include <limits>
# include <sstream>
# include <iostream>
# include <cerrno>
# include <iomanip>
# include <cctype>
# include <cmath>


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

			static int 	detectType(std::string literal);

			template <typename T> static void printChar(T c);
			template <typename T> static void printInt(T i);
			template <typename T> static void printFloat(T f);
			template <typename T> static void printDouble(T d);

			static void charConv(char c);
			static void intConv(int i);
			static void floatConv(float f);
			static void doubleConv(double d);

	public:
			
			static void convert(std::string literal);
};

#endif
