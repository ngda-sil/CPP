#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cctype>
# include <limits>
# include <iomanip>
# include <string>

enum type {CHAR = 2, INT = 3, FLOAT = 4, DOUBLE = 5};

struct t_struct
{ 
	int		type;
	char	c;
	int		i;
	float	f;
	double	d;
};

// utils
int		checkArgs(int ac);
int		detectType(std::string s);
void	convertToRealType(int type, std::string input, t_struct *ct);
void	explicitConversion(int type, t_struct *ct);
void	printConversion(t_struct ct);

//types
int	is_char(std::string s);
int is_int(std::string s);
int	is_float(std::string s);
int is_double(std::string s);

#endif
