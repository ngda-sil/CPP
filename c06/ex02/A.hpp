#ifndef A_HPP
# define A_HPP

# include "Base.hpp"
 
class A : public Base
{
	public:
			A();
			A(A const & rhs);
			A& operator=(A const & rhs);
			~A();
};

#endif
