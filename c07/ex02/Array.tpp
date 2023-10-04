template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned n) : _array(new T[n]()), _size(n) {}

template <typename T>
Array<T>::Array(Array const & rhs)
{
	if (this != &rhs)
	{
		_size = rhs._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = rhs._array[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(Array const & rhs)
{
	if (*this != &rhs)
	{
		_size = rhs._size;
		if (_array)
			delete[] _array;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = rhs._array[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array() {}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size || index < 0)
		throw std::out_of_range("Out of bound \n");
	return (_array[index]);
}

template <typename T>
unsigned int Array<T>::size()
{
	return (_size);
}
