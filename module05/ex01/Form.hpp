/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:07:22 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/18 19:48:47 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form {
	const std::string name;
	throw_over_low		GradeTooLowException;
	throw_over_high		GradeTooHighException;
	bool		signed_;
	int			grade_req_signe;
	const int	grade_req_execute;
	public :
		Form(std::string, int, int); //name, grade_req_signe, grade_req_execute
		Form(const Form&);
		Form& operator = (const Form&);
		std::string getName() const;
		bool		getSigne() const;
		int			getGrade_req_signe() const;
		int			getGrade_req_execute() const;
		~Form(void);
};

std::ostream& operator << (std::ostream &os, const Form& arg);

#endif