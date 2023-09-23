#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void myIter(Array* addr, int size, void * (f))
{
	std::cout << "ITER\n";
	
	T tmp = *val1;

	*val1 = *val2;
	*val2 = tmp;
}

#endif
