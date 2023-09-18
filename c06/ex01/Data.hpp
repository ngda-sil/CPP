#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
class Data
{
	public:
			Data();
			Data(std::string name, int size);
			Data(Data const & rhs);
			Data& operator=(Data const & rhs);
			~Data();

			std::string	name;
			int			size;
};

#endif
