/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:39:08 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/18 14:59:37 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

const char *throw_over_low::what () const _NOEXCEPT {
	return "The grade you chosed for this Bureaucrat is too low for him\n";
}

const char *throw_over_high::what () const _NOEXCEPT {
	return "The grade you chosed for this Bureaucrat is too high for him\n";
}

void	Bureaucrat::grade_decrement()
{
	if (grade == 150)
		throw GradeTooLowException;
	grade++;
}

void	Bureaucrat::grade_increment()
{
	if (grade == 1)
		throw GradeTooHighException;
	grade--;
}


std::string Bureaucrat::getName(void) const
{
	return name;
}

int	Bureaucrat::getGrade(void) const
{
	return grade;
}

Bureaucrat::Bureaucrat(std::string name_, int grade_) : name(name_)
{
	std::cout << "Default constructor called for Bureaucrat class\n";
	if (grade_ < 1)
		throw Bureaucrat::GradeTooHighException;
	if (grade_ > 150)
		throw Bureaucrat::GradeTooLowException;
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