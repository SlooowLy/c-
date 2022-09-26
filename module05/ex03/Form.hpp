/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:07:22 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/21 20:26:00 by aaitoual         ###   ########.fr       */
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
	int			grade_req_signe;
	const int	grade_req_execute;
	public :
		Form();
		Form(std::string, int, int); //name, grade_req_signe, grade_req_execute
		Form(const Form&);
		Form& operator = (const Form&);
		virtual std::string getName() const;
		virtual bool		getSigne() const;
		virtual int			getGrade_req_signe() const;
		virtual int			getGrade_req_execute() const;
		virtual void		beSigned(Bureaucrat*);
		virtual	void		setSigne(bool);
		virtual ~Form(void);
		class GradeTooLowException : public std::exception {
			virtual const char * what () const throw();
		};
		class GradeTooHighException : public std::exception {
			virtual const char * what () const throw();
		};
		class Bureaucrat_grade_low : public std::exception {
			virtual const char * what () const throw();
		};
		class Form_not_signed : public std::exception {
			virtual const char * what () const throw();
		};
		class Form_not_found : public std::exception {
			virtual const char * what () const throw();
		};
		virtual void		execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator << (std::ostream &os, const Form& arg);

#endif