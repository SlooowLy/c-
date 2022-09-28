/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:51:11 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/28 11:51:13 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target_) :  name("RobotomyRequestForm"), grade_to_execute(45), grade_to_signe(72)
{
	std::cout << "Default constructor called for RobotomyRequestForm class\n";
	target = target_;
	signe = 0;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : name("RobotomyRequestForm"), grade_to_execute(45), grade_to_signe(72) {
	std::cout << "Copy constructor called for RobotomyRequestForm class\n";
	target = copy.target;
	signe = copy.signe;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy) {
	std::cout << "Copy assignement operator called for RobotomyRequestForm class\n";
	signe = copy.signe;
	target = copy.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Destructor called for RobotomyRequestForm class\n";
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!signe)
		throw Form_not_signed();
	else if (executor.getGrade() <= grade_to_execute) {
		std::cout << "some drilling noises!\n";
		srand(time(0));
		if (rand() % 2)
			std::cout << target << " has been robotomized successfully!\n";
		else
			std::cout << "The robotomy failed!\n";
	}
	else
		throw Bureaucrat_grade_low(); 
}

std::string RobotomyRequestForm::getName(void) const
{
	return name;
}

int RobotomyRequestForm::getGrade_req_execute(void) const
{
	return grade_to_execute;
}

int RobotomyRequestForm::getGrade_req_signe(void) const
{
	return grade_to_signe;
}

bool RobotomyRequestForm::getSigne(void) const
{
	return signe;
}

void	RobotomyRequestForm::setSigne(bool i)
{
	signe = i;
}