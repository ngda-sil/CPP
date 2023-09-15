#include "convert.hpp"
// is_char
int	is_char(std::string s)
{
	if ((s.length() == 1) && isprint(s[0]) && !isdigit(s[0]))
		return (1);
	else
		return (0);
}

// is_int
int is_number(std::string s)
{
	for (unsigned long i = 0; i < s.length(); i++)
	{
		if (!i && s[i] == '-')
			continue; 
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}

int is_not_int(std::string s)
{
	int res = 0;

	for (int i = 0; i <= s.back(); i++)
	{
		if (!i && s[i] == '-')
			continue;
		if ((res > INT_MAX / 10) 
			|| (res == INT_MAX / 10 && s[0] == '-' && s[i] > '8')
			|| (res == INT_MAX / 10 && s[0] != '-' && s[i] > '7'))
			return (0);	
		res = res * 10 + (s[i] - '0');
	}
	return (1);
}

int	is_int(std::string s)
{
	if (is_number(s) && !is_not_int(s))
		return (1);
	else
		return (0);
}

// is_float
int	is_float(std::string s)
{
	//if (s.back() == 'f'&& is_number(s.substr(0, s.find('.'))) && is_number((s.substr(s.find('.') + 1).pop_back())
	if (!std::stof(s))
		return (0);
	else
		return (1);
}

// is_double
int is_double(std::string s)
{
	if (is_number(s.substr(0, s.find('.'))) && is_number(s.substr(s.find('.'), s.back())))
		return(1);
	else
		return(0);
}
