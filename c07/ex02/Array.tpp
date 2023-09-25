template <typename T>
Array<T>::Array() : _myArray(NULL), _n(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _myArray(new T[n]), _n(n) {}

template <typename T>
Array<T>::Array(const Array& rhs)
{
	if (this != &rhs)
	{
		_n = rhs._n;
		_myArray = new T[_n];
		for(unsigned int i = 0; i < _n; i++)
			_myArray[i] = rhs._myArray[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& rhs)
{
	if (this == &rhs)
		return (*this);
	if (_myArray)
		delete[] _myArray;
	_n = rhs._n;
	_myArray = new T[_n];
	for (unsigned int i = 0; i < _n; i++)
		_myArray[i] = rhs._myArray[i];
	return(*this);
}

template <typename T>
Array<T>::~Array()
{
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index < 0 || index >= _n)
		throw std::out_of_range("Index out of bounds");
	return(_myArray[index]);
}

template <typename T>
unsigned int Array<T>::size()
{
	return (_n);
}
