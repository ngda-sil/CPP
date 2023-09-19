#ifndef BASE_HPP
# define BASE_HPP
 
 # include <iostream>
 # include <cstdlib>

class A;
class B;
class C;

class Base
{
	public:
			Base();
			Base(Base const & rhs);
			Base& operator=(Base const & rhs);
			virtual ~Base();

			Base* 	generate();
};

void	identify(Base* p);
void	identify(Base& p);

#endif
