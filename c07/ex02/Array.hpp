#ifndef ARRAY_HPP
# define ARRAY_HPP


template <typename T>
class Array
{
	private:
			T* _myArray;
			unsigned int _n;
	public:
			Array(void);
			Array(unsigned int n);
			Array(const Array& rhs);
			Array& operator=(const Array& rhs);
			~Array(void);

			T& operator[](unsigned int index);

			unsigned int size();
};

# include "Array.tpp"  

#endif
