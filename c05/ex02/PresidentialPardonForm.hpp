#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class Bureaucrate;

class PresidentialPardon : public Form
{
	public:
			PresidentialPardon(const std::string target);
			PresidentialPardon(const PresidentialPardon &rhs);
			PresidentialPardon& operator=(const PresidentialPardon &rhs);
			~PresidentialPardon(void);

			 void execute(Bureaucrat const & executor) const;
	
	private:
			const std::string	_target;
};

#endif



