#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class Bureaucrate;

class PresidentialPardon : public AForm
{
	private:
			const std::string	_target;

			PresidentialPardon();
			
	public:
			PresidentialPardon(const std::string target);
			PresidentialPardon(const PresidentialPardon &rhs);
			PresidentialPardon& operator=(const PresidentialPardon &rhs);
			~PresidentialPardon(void);

			void execute(Bureaucrat const & executor) const;
};

#endif
