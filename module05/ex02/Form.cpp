/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 19:35:33 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/28 10:51:51 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

//Default formula for the class***************************************

Form::Form() : name("undefined"), grade_req_execute(150), grade_req_signe(150)
{
	std::cout << "Default constractor called for Form class\n";
	signed_ = 0;
}

Form::Form(std::string name_, int grade_req_signe_, int grade_req_execute_) : name(name_), grade_req_execute(grade_req_execute_), grade_req_signe(grade_req_signe_)
{
	std::cout << "Constractor called for Form class\n";
	if (grade_req_signe_ > 150 || grade_req_execute_ > 150)
		throw GradeTooLowException();
	if (grade_req_signe_ < 1 || grade_req_execute_ < 1)
		throw GradeTooHighException();
	signed_ = false;
}

Form::Form(const Form& copy) : name(copy.name), grade_req_execute(copy.grade_req_execute), grade_req_signe(copy.grade_req_signe)
{
	std::cout << "Copy constructor called for Form class\n";
	*this = copy;
}

Form& Form::operator = (const Form& copy)
{
	std::cout << "Copy assinement operator called for class Form\n";
	signed_ = copy.signed_;
	return *this;
}

Form::~Form()
{
	std::cout << "Destructor called for Form class\n";
}

//getters***************************************************************

std::string Form::getName(void) const
{
	return name;
}

int Form::getGrade_req_execute(void) const
{
	return grade_req_execute;
}

int Form::getGrade_req_signe(void) const
{
	return grade_req_signe;
}

bool Form::getSigne(void) const
{
	return signed_;
}

//operator overload for ostream*****************************************

std::ostream& operator << (std::ostream &os, const Form& arg)
{
	std::string tmp;

	tmp = arg.getName();
	tmp.append(", need at least ");
	tmp.append(std::to_string(arg.getGrade_req_execute()));
	tmp.append(" as a grade to be executed and at least ");
	tmp.append(std::to_string(arg.getGrade_req_signe()));
	tmp.append(" as a grade to be signed and the Form is");
	if (arg.getSigne())
		tmp.append(" signed now\n");
	else
		tmp.append(" not signed now\n");
	os << tmp;
	return os;
}

// other methods*************************************************

void	Form::beSigned(Bureaucrat *beru)
{
	if (signed_)
		std::cout << "This form is already signed!\n";
	else if (beru->getGrade() <= grade_req_signe)
	{
		std::cout << "The Form " << name << " was signed by the bereaucrat " << beru->getName() << "!\n";
		signed_ = 1;
	}
	else
	{
		std::cout << "The Form " << name << " can't be signed by the bereaucrat " << beru->getName() << "!\n";
		throw Form::GradeTooLowException();
	}	
}

const char *Form::GradeTooLowException::what () const _NOEXCEPT {
	return "The grade you chosed is too low\n";
}

const char *Form::GradeTooHighException::what () const _NOEXCEPT {
	return "The grade you chosed is too high\n";
}

const char *Form::Bureaucrat_grade_low::what () const _NOEXCEPT {
	return "This bureaucrat can't execute this form because his grade is lower what the form need\n";
}

const char *Form::Form_not_signed::what () const _NOEXCEPT {
	return "This Form is not signed yet, you need to signe it before the executing\n";
}

void	Form::setSigne(bool i)
{
	signed_ = i;
}