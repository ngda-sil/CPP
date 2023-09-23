#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void mySwap(T* val1, T* val2)
{
	std::cout << "SWAP\n";
	
	T tmp = *val1;

	*val1 = *val2;
	*val2 = tmp;
}

template <typename T>
T myMin(T val1, T val2)
{
	std::cout << "MIN : ";

	if ((val1 == val2) || (val2 < val1))
		return (val2);
	else
		return (val1);
}

template <typename T>
T myMax(T val1, T val2)
{
	std::cout << "MAX : ";

	if ((val1 == val2) || (val2 > val1))
		return (val2);
	else
		return (val1);
}

#endif
