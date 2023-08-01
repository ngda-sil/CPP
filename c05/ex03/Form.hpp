#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	public:

		Form(std::string name, int toSign, int toExc);
		Form(const Form &rhs);
		Form& operator=(const Form &rhs);
		virtual ~Form(void);

	 	std::string	getName(void) const;
		int			getToSign(void) const;
		int			getToExc(void) const;
		bool 		isSigned(void) const;

		int			setGrade(int grade);
		void		beSigned(Bureaucrat &b);

		void			checkPrerequisites(int executorGrade) const;
		virtual void	execute(Bureaucrat const & executor) const = 0;

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
		class		FormAlreadySignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class		FormNotSignedException : public std::exception
		{
			public:
				const char * what() const throw();
		};

		class		FormDoesNotExistException : public std::exception
		{
			public:
				const char * what() const throw();

		};

	protected:

		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExc;
};

std::ostream& operator <<(std::ostream& o, Form const &f);

#endif
