#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <cstdlib>
# include <exception>


class Base
{      
	public:
			Base();
			Base(Base const & rhs);
			Base& operator=(Base const & rhs);
			virtual ~Base();

};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* 	generate();
void	identify(Base* p);
void	identify(Base& p);

#endif
