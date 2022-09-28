/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:25:57 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/28 10:36:21 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>


class Bureaucrat {
	const std::string	name;
	int					grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string, int);
		~Bureaucrat();
		const std::string getName() const;
		int getGrade() const;
		void	grade_increment(void);
		void	grade_decrement(void);
		class GradeTooLowException : public std::exception {
			virtual const char * what () const _NOEXCEPT;
		};
		
		class GradeTooHighException : public std::exception {
			virtual const char * what () const _NOEXCEPT;
		};
};

std::ostream& operator << (std::ostream &os, const Bureaucrat& arg);

#endif