#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void myIter(T* addr, int size, void (*funct)(T))
{	
	for (int i = 0; i < size; i++)
		funct(addr[i]);
}

template <typename T>
void printElement(T x) 
{
    std::cout << x << " ";
}

template <typename T>
void addOne(T x) 
{
	x++;
	std::cout << x << " ";
}


#endif
