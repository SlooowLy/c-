/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:07:22 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/28 10:47:56 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"


class throw_over_low : public std::exception {
	virtual const char * what () const _NOEXCEPT;
};

class Bureaucrat;

class Form {
	const std::string name;
	bool		signed_;
	const int	grade_req_execute;
	const int	grade_req_signe;
	public :
		Form();
		Form(std::string, int, int); //name, grade_req_signe, grade_req_execute
		Form(const Form&);
		Form& operator = (const Form&);
		std::string getName() const;
		bool		getSigne() const;
		int			getGrade_req_signe() const;
		int			getGrade_req_execute() const;
		void		beSigned(Bureaucrat*);
		~Form(void);
		class GradeTooLowException : public std::exception {
			virtual const char * what () const throw();
		};
		class GradeTooHighException : public std::exception {
			virtual const char * what () const throw();
		};
};

std::ostream& operator << (std::ostream &os, const Form& arg);

#endif