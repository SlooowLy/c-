/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:39:08 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/20 15:44:02 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"


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


std::string Bureaucrat::getName(void) const
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
	std::cout << "Constructor called for Bureaucrat class\n";
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

void	Bureaucrat::signForm(Form *form)
{
	if (form->getSigne())
		std::cout << "This form is aready signed!\n";
	else if (grade > form->getGrade_req_signe())
		std::cout << name << " couldn't signe " << form->getName() << " because his grade " << grade << " is lower than what this form need to be signed\n";
	else {
		std::cout << name << " signed " << form->getName() << std::endl;
		form->beSigned(this);
	}
}

const char *Bureaucrat::GradeTooLowException::what () const _NOEXCEPT {
	return "The grade you chosed is too low\n";
}

const char *Bureaucrat::GradeTooHighException::what () const _NOEXCEPT {
	return "The grade you chosed is too high\n";
}