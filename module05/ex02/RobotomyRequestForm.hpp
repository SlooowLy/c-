/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:45:05 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/20 20:05:36 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	std::string name;
	std::string target;
	int grade_to_signe;	
	int grade_to_execute;
	bool	signe;
	public :
		RobotomyRequestForm(std::string);
		~RobotomyRequestForm();
		virtual std::string getName() const;
		virtual bool		getSigne() const;
		virtual int			getGrade_req_signe() const;
		virtual int			getGrade_req_execute() const;
		void				setSigne(bool);
		void	execute(Bureaucrat const & executor) const;
};


# endif