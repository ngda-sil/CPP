#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <cstdint>
# include <iostream>

class Data;
 
class Serializer
{
	public:
			Serializer();
			Serializer(Serializer const & rhs);
			Serializer& operator=(Serializer const & rhs);
			~Serializer();

			uintptr_t	serialize(Data* ptr);
			Data*		deserialize(uintptr_t raw);
};

#endif
