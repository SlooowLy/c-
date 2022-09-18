# include <iostream>
# include <string>
# include "Contact.hpp"
# include "PhoneBook.hpp"

void	Contact::setting(std::string set, int i)
{
	switch (i)
	{
		case 1:
			this->first_name = set;
			break;
		case 2:
			this->last_name = set;
			break;
		case 3:
			this->nickname = set;
			break;
		case 4:
			this->phone_number = set;
			break;
		case 5:
			this->darkest_secret = set;
			break;
		default:
			break;
	}
}

Contact PhoneBook::get_contact(int i)
{
	Contact ret;
	if (i >= 0 && i < 8)
		return all[i];
	return ret;
}

void PhoneBook::set_contact(Contact set, int i)
{
	this->all[i] = set;
}

std::string Contact::getting(int	i)
{
	switch (i)
	{
		case 1:
			return (first_name);
		case 2:
			return (last_name);
		case 3:
			return (nickname);
		case 4:
			return (phone_number);
		case 5:
			return (darkest_secret);
		default:
			break;
	}
	return (NULL);
}

char	check_arg(Contact contact, int i, int *j, int k)
{
	if (contact.getting(k).length())
	{
		if (contact.getting(k).length() > 10)
		{
			*j += 1;
			if (*j - 1 < 9 && contact.getting(k)[*j - 1])
				return (contact.getting(k)[*j - 1]);
			else if (*j - 1 == 9)
				return ('.');
		}
		else if (contact.getting(k).length() <= 10)
		{
			if ((i % 11) + contact.getting(k).length() > 10 && contact.getting(k)[*j] && (i % 11) <= 10)
			{
				*j += 1;
				return (contact.getting(k)[*j - 1]);
			}
		}
	}
	return (' ');
}

int	The_Art(PhoneBook phone, int index)
{
	int	i;
	int	k;
	int	j;

	j = 0;
	k = 0;
	if (phone.get_contact(index).getting(1).length())
		std::cout << "         " << index;
	else
		return 0;
	for (i = 0; i < 34 && phone.get_contact(index).getting(1)[0]; i++)
	{
		if (!(i % 11))
		{
			k++;
			j = 0;
			std::cout << "|";
		}
		else
		{
			std::cout << check_arg(phone.get_contact(index), i, &j, k);
		}
	}
	std::cout << std::endl;
	return 1;
}

int	get_contact_info(PhoneBook phone, int index)
{
	if (index > -1 && index < 7 && !phone.get_contact(index).getting(1)[0])
		return 0;
	for (int i = 1; i < 6; i++)
		std::cout << phone.get_contact(index).getting(i) << std::endl;
	return 1;
}

int	check_contact(Contact contact)
{
	for (int i = 1; i < 6; i++)
	{
		if (!contact.getting(i)[0])
			return 0;
	}
	return 1;
}

int	add(std::string tmp, PhoneBook &phone, Contact &contact, int &i)
{
	std::cout << "entre the first name: ";
	if (!getline(std::cin, tmp))
		return (1);
	contact.setting(tmp, 1);
	std::cout << "entre the last name: ";
	if (!getline(std::cin, tmp))
		return (1);
	contact.setting(tmp, 2);
	std::cout << "entre the nickname: ";
	if (!getline(std::cin, tmp))
		return 1;
	contact.setting(tmp, 3);
	std::cout << "entre the phone number: ";
	if (!getline(std::cin, tmp))
		return 1;
	contact.setting(tmp, 4);
	std::cout << "entre the darkest secret: ";
	if (!getline(std::cin, tmp))
		return 1;
	contact.setting(tmp, 5);
	if (check_contact(contact))
	{
		std::cout << "CONTACT ADDED :)\n";
		phone.set_contact(contact, i % 8);
		i++;
	}
	else
		std::cout << "COULDN'T ADD THE CONTACT :(\n";
	return 0;
}

void	search(PhoneBook phone, std::string tmp)
{
	for (int j = 7; j >= 0; j--)
	{
		The_Art(phone, j);
	}
	while (1)
	{
		std::cout << "ENTER WHAT INDEX U WANT : ";
		if (!std::getline(std::cin, tmp))
			break;
		if (tmp.length() > 1)
			std::cout << "invalid index!!!!\n";
		else if (tmp.find_first_not_of("12345678") == std::string::npos)
		{
			if (!get_contact_info(phone, (int)tmp[0] - 49))
				std::cout << "couldn't find the contact!!\n";
			break ;
		}
		else
			std::cout << "invalid index!!!!\n";
	}
}

int	main()
{
	int	i;
	std::string tmp;
	Contact contact;
	PhoneBook phone;

	i = 0;
	while (1)
	{
		if (i > 1000000 && !(i % 8))
			i = 0;
		std::cout << "entre your option (ADD / SEARCH / EXIT): ";
		if (!std::getline(std::cin, tmp))
			break;
		if (tmp == "ADD")
		{
			if (add(tmp, phone, contact, i))
				break;
		}
		else if (tmp == "SEARCH")
			search(phone, tmp);
		else if (tmp == "EXIT")
			return 0;
		else
			std::cout << "INVALID INPUT\n";
	}
}
