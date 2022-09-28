/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:38:38 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/28 11:55:24 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target_) : name("ShrubberyCreationForm"), grade_to_execute(137), grade_to_signe(145)
{
	std::cout << "Default constructor called for ShrubberyCreationForm class\n";
	target = target_;
	signe = 0;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : name("ShrubberyCreationForm"), grade_to_execute(137), grade_to_signe(145) {
	std::cout << "Copy constructor called for ShrubberyCreationForm class\n";
	target = copy.target;
	signe = copy.signe;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy) {
	std::cout << "Copy assignement operator called for ShrubberyCreationForm class\n";
	signe = copy.signe;
	target = copy.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Destructor called for ShrubberyCreationForm class\n";
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!signe)
		throw Form_not_signed();
	else if (executor.getGrade() <= grade_to_execute) {
		std::ofstream	os(target + "_shrubbery");
		if (!os.is_open())
			std::cout << "couldn't open the file " << target + "_shrubbery" << std::endl;
		os << "            .        +          .      .          .\n     .            _        .                    .\n  ,              /;-._,-.____        ,-----.__\n ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n  `                 |   _|`*=:_::.`.);  | __/ /\n                      ,    `./  |:. `.   )==-  .\n    .      ., ,-=-.  ,|, +#./`   |:.  / /           .\n.           |/:/`-- , ,| -` ` `   ): , /_  -o\n       .    /:+- - + +- : :- + + -:-  /(o-) |)     .\n  .      ,=-:  |    ` `/` - , , ,:- `---*.--*---._/`7\n   `.   (    |: |,-._` ` + -|, ,*   _,--._,---*:.__/\n              |:  `  X` _| _,|/-   .--\n.               *:._:`|____  /:-  /      .           .\n                    |::.  :|/:-  /              +\n   .                 `.:.  /:-  }      .\n           .           ):_(:;   |           .\n                      /:. _/ ,  |\n                   . (|::.     ,`                  .\n     .                |::.    {|\n                      |::.|  | `.\n                      |:::(|    |\n              O       |:::/{ }  |                  (o\n               )  ___/#|::`/ (O *==._____   O, (O  /`\n          ---w/w-*--,|` `:/,-(-`*--------*-o-|-/-w|/-\n	   -----------------------||W------------||/--";
		os.close();
	}
	else
		throw Bureaucrat_grade_low(); 
}

std::string ShrubberyCreationForm::getName(void) const
{
	return name;
}

int ShrubberyCreationForm::getGrade_req_execute(void) const
{
	return grade_to_execute;
}

int ShrubberyCreationForm::getGrade_req_signe(void) const
{
	return grade_to_signe;
}

bool ShrubberyCreationForm::getSigne(void) const
{
	return signe;
}

void	ShrubberyCreationForm::setSigne(bool i)
{
	signe = i;
}