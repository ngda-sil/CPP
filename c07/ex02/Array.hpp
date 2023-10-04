#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <stdexcept>

template <typename T>
class Array
{
	private:
			T*				_array;
			unsigned int	_size;	
	public:
			Array();
			Array(unsigned n);
			Array(Array const & rhs);
			Array& operator=(Array const & rhs);
			~Array();

			T& operator[](unsigned int index);

			unsigned int size();
};
# include "Array.tpp"
#endif
