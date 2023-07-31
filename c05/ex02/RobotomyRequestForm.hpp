#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>

class Bureaucrate;

class RobotomyRequest : public Form
{
	public:
			RobotomyRequest(const std::string target);
			RobotomyRequest(const RobotomyRequest &rhs);
			RobotomyRequest& operator=(const RobotomyRequest &rhs);
			~RobotomyRequest(void);

			 void execute(Bureaucrat const & executor) const;
	
	private:
			const std::string	_target;
};

#endif
