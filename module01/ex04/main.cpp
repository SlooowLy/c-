/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:41:05 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/12 17:24:23 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <fstream>
# include <iostream>
# include <string>

class	str
{
	std::string ori_file;
	int	done;
	public :
		std::string getting();
		int	getting(int i);
		void	setting(std::string set);
		void	setting(int i);
};

std::string str::getting()
{
	return ori_file;
}

int	str::getting (int i)
{
	i = 1;
	return done;
}

void	str::setting(std::string set)
{
	ori_file = set;
}

void	str::setting(int i)
{
	done = i;
}

str get_file(char *file_name)
{
	std::ifstream	file;
	char			*tmp = new char[1];
	str 	all;
	
	file.open(file_name, std::ifstream::in);
	all.setting(1);
	if (!file.is_open())
	{
		std::cout << "couldn't read the file :" << file_name << ":)\n";
		all.setting(0);
		delete[] tmp;
		return all;
	}
	while (1)
	{
		if (!file.get(tmp[0]))
			break ;
		all.setting(all.getting().append(tmp));
	}
	delete[] tmp;
	return (all);
}

str	replace(std::string s1, std::string s2, str ori_file)
{
	int i;

	if (!ori_file.getting(0))
		return ori_file;
	while (ori_file.getting().find(s1) != std::string::npos)
	{
		i = ori_file.getting().find(s1);
		ori_file.setting(ori_file.getting().erase(i, s1.length()));
		ori_file.setting(ori_file.getting().insert(i, s2));
	}
	return ori_file;
}

void	write_the_new_file(std::string new_file, std::string file_name)
{
	std::ofstream file;

	file.open(file_name.append(".replace"), std::ofstream::out | std::ostream::trunc);
	if (!file.is_open())
		std::cout << "couldn't write or creat the file :" << file_name << ":)\n";
	else
		file << new_file;
}

int main(int ac, char **av)
{
	str the_new_file;
	
	if (ac != 4)
	{
		std::cout << "u shoudl give me 3 args, im just a (0 & 1) help me please :) \n";
		return (0);
	}
	the_new_file = replace(av[2], av[3], get_file(av[1]));
	if (!the_new_file.getting(0))
		return (0);
	write_the_new_file(the_new_file.getting(), av[1]);
	return (0);
}