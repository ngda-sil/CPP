#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define CYAN		"\033[36m"

class Form; 

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

			void		moveUpTheLadder(void);
			void		moveDownTheLadder(void);

			void		signForm(Form &f);
			
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
			int					_grade;
			const std::string	_name;
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const &b);

#endif
