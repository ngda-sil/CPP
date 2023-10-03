#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>

# define RESET		"\033[0m"
# define RED		"\033[31m"


class	Converter
{
	private:
			Converter(void);
			Converter(const Converter& rhs);
			Converter& operator=(const Converter& rhs);
			~Converter(void);


			static void convertToTrueType(std::string toConvert);

	public:

			static std::string	_type;
			static void	convert(std::string toConvert);

};

std::ostream& operator<<(std::ostream& o, Converter const &c);

#endif
