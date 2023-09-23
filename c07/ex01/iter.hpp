#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void myIter(T*** addr, int size, void (*funct)(T))
{
	std::cout << "ITER\n";
	
	int i = 0;

	for (int i = 0; i < size; i++)
		funct(T[i]);
}

#endif
