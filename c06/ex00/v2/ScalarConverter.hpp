#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cctype>
# include <cstdlib>
# include <stdlib.h>
# include <string>
# include <iomanip>
# include <limits>

# define RESET		"\033[0m"
# define RED		"\033[31m"

# define LIMITS 8

enum type
{
	NONE	= 0x0;															//  INT | FLOAT;				Combining INT and FLOAT 
	INF 	= 0x1,															// currentDataType |= DOUBLE;	Add another data type
	NAN		= 0x2,															// currentDataType &= ~FLOAT;	Remove a data type
	CHAR 	= 0x4,
	INT 	= 0x8,
	FLOAT 	= 0x10,
	DOUBLE 	= 0x32,
};

class	ScalarConverter
{
	private:
			ScalarConverter(void);
			ScalarConverter(const ScalarConverter& rhs);
			ScalarConverter& operator=(const ScalarConverter& rhs);
			~ScalarConverter(void);

			static std::string _limits[LIMITS];

			static std::string toLowerString(std::string s);

			static void explicitConversionAndPrint(std::string toConvert, int type);

			static void limits(std::string);
			static void toChar(std::string);
			static void toInt(std::string);
			static void toFloat(std::string);
			static bool toDouble(std::string);

	public:
			
			static void convert(std::string toConvert);

};

#endif
