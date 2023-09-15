#include "convert.hpp"

int	checkArgs(int ac)
{
	if (ac == 2)
		return (0);
	else
	{
		std::cerr << "Wrong number of arguments !" << std::endl;
		return (1);
	}
}

int	detectType(std::string s)
{
		if (is_char(s))
			return (CHAR);
		else if (is_int(s))
			return (INT);
		else if (is_float(s))
			return (FLOAT);
		//else if (is_double(s))
		//	return (DOUBLE);
		else
		{
			std::cerr << "Type unknown !" << std::endl;
			return (1);
		}
	}

void	convertToRealType(int type, std::string input, t_struct *ct)
{
	if (type == CHAR)
		ct->c = input[0];
	else if (type == INT)
		ct->i = std::stoi(input);
	else if (type == FLOAT)
		ct->f = std::stof(input);
	else if (type == DOUBLE)
		ct->d = std::stod(input);
}

void	explicitConversion(int type, t_struct *ct)
{
	if (type == CHAR)
	{
		ct->i = (int)ct->c;
		ct->f = (float)ct->c;
		ct->d = (double)ct->c;
	}
	else if (type == INT)
	{
		ct->c = static_cast<char> (ct->i);
		ct->f = static_cast<float> (ct->i);
		ct->d = static_cast<double> (ct->i);
	}
	else if (type == FLOAT)
	{
		ct->c = static_cast<char> (ct->f);
		ct->i = static_cast<int> (ct->f);
		ct->d = static_cast<double> (ct->f);
	}
	else if (type == DOUBLE)
	{
		ct->c = static_cast<char> (ct->d);
		ct->f = static_cast<float> (ct->d);
		ct->i = static_cast<int> (ct->d);
	}
}

void	printConversion(t_struct ct)
{
		std::cout << "char : " << ct.c << std::endl;
		std::cout << "int : " << ct.i << std::endl;
		std::cout << "float : " << ct.f << 'f' << std::endl;
		std::cout << "double : " << ct.d << std::endl;
}
