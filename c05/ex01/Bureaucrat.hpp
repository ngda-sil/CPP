#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Bureaucrat
{
	public:
			Bureaucrat(int grade, std::string name);
			Bureaucrat(const Bureaucrat &rhs);
			Bureaucrat& operator=(const Bureaucrat & rhs);
			~Bureaucrat(void);
			
			int			getGrade(void) const;
			void		setGrade(int grade);
			std::string	getName(void) const;
			void		setName(std::string name);

			void		moveUpTheLadder(void);
			void		moveDownTheLadder(void);

			void		signForm(Form f);
			
			class		GradeTooHighException : public std::exception
			{
				public:
					const char* what() const throw();
			};
			class		GradeTooLowException : public std::exception
			{
				public:
					const char* what() const throw();
			};

	private:
			int			_grade;
			std::string	_name;
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const &b);

#endif
