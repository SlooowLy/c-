/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:39:41 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/21 20:31:12 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "Intern.hpp"

int main()
{
	try {
		Bureaucrat tsuki("tsuki", 1);
		Intern get;
		Form *test = get.makeForm("shrubbery creation", "hey");
		tsuki.signForm(test);
		test->execute(tsuki);
		delete test;
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
}