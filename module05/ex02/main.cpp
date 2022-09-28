/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:39:41 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/28 11:30:29 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

int main()
{
	try {
		Bureaucrat tsuki("tsuki", 1);
		RobotomyRequestForm test("tsuki");
		tsuki.signForm(&test);
		tsuki.executeForm(test);
		test.execute(tsuki);
	}
	catch(std::exception& e)
	{
		std::cout << e.what();
	}
}