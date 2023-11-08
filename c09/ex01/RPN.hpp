#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <iostream>
# include <sstream>
# include <cstdio>
# include <cctype>

class RPN
{
	private :
			RPN();
			RPN(RPN const & rhs);
			RPN& operator=(RPN const & rhs);
			~RPN();
			
			static std::stack<float> _s;

			static void operation(char token);

	public :
			static void calculation(std::string expression);

};

#endif
