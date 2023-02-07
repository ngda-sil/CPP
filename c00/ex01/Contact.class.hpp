#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
# include <string>
class Contact{

public:
	Contact(void);
	~Contact(void);

	std::string	FirstName;
	char	LastName[100];
	char	NickName[100];
	int		PhoneNumber;
	char	DarkestSecret[100];

	};
#endif
