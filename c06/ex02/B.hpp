#ifndef B_HPP
# define B_HPP

# include "Base.hpp"
 
class B : public Base
{
	public:
			B();
			B(B const & rhs);
			B& operator=(B const & rhs);
			~B();
};

#endif
