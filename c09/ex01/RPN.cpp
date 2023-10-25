#include "RPN.hpp"

std::stack<float> RPN::_s;
// Private member function

void RPN::operation(char token)
{
	float res;
	float val[2];

	for (int i = 1;  i >= 0; i--)
	{
		val[i] = _s.top();
		_s.pop();
	}

	if (token == '+')
		res = val[0] + val[1];
	else if (token == '-')
		res = val[0] - val[1];
	else if (token == '*')
		res = val[0] * val[1];
	else
		res = val[0] / val[1];
	
	_s.push(res);
}

// Public member function

void RPN::calculation(std::string expression)
{
	std::istringstream iss(expression);

	char n;
	
	while (iss >> n)
	{	
		if ((n - '0' >= 0) && (n - '0' <= 9))
			_s.push(n - '0');
		else if((n == '+'|| n == '-' || n == '*' || n == '/')
					&& (_s.size() >= 2))
			operation(n);
		else
			break;
	}

	if (_s.size() != 1 || (_s.size() == 1 && iss.eof() == false))
		std::cerr << "Error : invalid input" << std::endl;
	else
		std::cout <<  _s.top() << std::endl;
}
