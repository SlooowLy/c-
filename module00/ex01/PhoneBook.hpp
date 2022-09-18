#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook 
{
	Contact	all[8];
	public:
		Contact get_contact(int i);
		void set_contact(Contact set, int i);
};

# endif