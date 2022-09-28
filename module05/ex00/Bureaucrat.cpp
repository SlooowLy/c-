/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:39:08 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/28 10:36:29 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooLowException::what () const _NOEXCEPT {
	return "The grade you chosed for this Bureaucrat is too low for him\n";
}

const char *Bureaucrat::GradeTooHighException::what () const _NOEXCEPT {
	return "The grade you chosed for this Bureaucrat is too high for him\n";
}

void	Bureaucrat::grade_decrement()
{
	if (grade == 150)
		throw GradeTooLowException();
	grade++;
}

void	Bureaucrat::grade_increment()
{
	if (grade == 1)
		throw GradeTooHighException();
	grade--;
}


const std::string Bureaucrat::getName(void) const
{
	return name;
}

int	Bureaucrat::getGrade(void) const
{
	return grade;
}

Bureaucrat::Bureaucrat() : name("undefined")
{
	std::cout << "Default onstructor called for Bureaucrat class\n";
	grade = 150;
}

Bureaucrat::Bureaucrat(std::string name_, int grade_) : name(name_)
{
	std::cout << "Default constructor called for Bureaucrat class\n";
	if (grade_ < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade_ > 150)
		throw Bureaucrat::GradeTooLowException();
	grade = grade_;
}

std::ostream& operator << (std::ostream &os, const Bureaucrat& arg)
{
	std::string tmp;
	tmp = arg.getName();
	tmp.append(", bureaucrat grade .");
	tmp.insert(tmp.length() - 1, std::to_string(arg.getGrade()));
	os << tmp;
	return os;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called for Bureacrat class\n";
}