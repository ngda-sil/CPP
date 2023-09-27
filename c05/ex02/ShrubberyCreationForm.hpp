#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

# define TREE \
"               ,@@@@@@@,\n"\
"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"\
"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"\
"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"\
"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"\
"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"\
"   `&%\\ ` /%&'    |.|        \\ '|8'\n"\
"       |o|        | |         | |\n"\
"       |.|        | |         | |\n"\
" \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n"\

class Bureaucrate;

class ShrubberyCreation : public AForm
{
	private:
			const std::string	_target;

			ShrubberyCreation();
			
	public:
			ShrubberyCreation(const std::string target);
			ShrubberyCreation(const ShrubberyCreation &rhs);
			ShrubberyCreation& operator=(const ShrubberyCreation &rhs);
			~ShrubberyCreation(void);

			 void execute(Bureaucrat const & executor) const;
};

#endif
