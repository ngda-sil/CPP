#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);

	Contact	tab[8];
	int		i;

	//Contact*	initCon(void);
	void		addContact(int i);
};
#endif
