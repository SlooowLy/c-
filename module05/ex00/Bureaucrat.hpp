/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:25:57 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/18 14:48:58 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class throw_over_low : public std::exception {
	virtual const char * what () const _NOEXCEPT;
};

class throw_over_high : public std::exception {
	virtual const char * what () const _NOEXCEPT;
};

class Bureaucrat {
	const std::string	name;
	int					grade;
	throw_over_low		GradeTooLowException;
	throw_over_high		GradeTooHighException;
	public:
		Bureaucrat(std::string, int);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void	grade_increment(void);
		void	grade_decrement(void);
};

std::ostream& operator << (std::ostream &os, const Bureaucrat& arg);

#endif