/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:01:17 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/20 20:05:53 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
# define SHRUBBERYCREATIONFORM

# include <fstream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {
	std::string name;
	std::string target;
	int grade_to_signe;	
	int grade_to_execute;
	bool	signe;
	public :
		ShrubberyCreationForm(std::string);
		~ShrubberyCreationForm();
		virtual std::string getName() const;
		virtual bool		getSigne() const;
		virtual int			getGrade_req_signe() const;
		virtual int			getGrade_req_execute() const;
		void				setSigne(bool);
		void	execute(Bureaucrat const & executor) const;
};

#endif