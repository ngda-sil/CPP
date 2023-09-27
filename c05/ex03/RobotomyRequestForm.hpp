#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>

class Bureaucrate;

class RobotomyRequest : public AForm
{	
	private:
			const std::string	_target;

			RobotomyRequest();
			
	public:
			RobotomyRequest(const std::string target);
			RobotomyRequest(const RobotomyRequest &rhs);
			RobotomyRequest& operator=(const RobotomyRequest &rhs);
			~RobotomyRequest(void);

			void execute(Bureaucrat const & executor) const;
			static AForm*	clone(const std::string target);
};

#endif
