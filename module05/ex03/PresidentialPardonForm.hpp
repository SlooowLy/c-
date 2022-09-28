/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:52:48 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/28 11:53:32 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
	const std::string name;
	std::string target;
	const int grade_to_execute;
	const int grade_to_signe;	
	bool	signe;
	public :
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm & operator = (const PresidentialPardonForm&);
		~PresidentialPardonForm();
		virtual std::string getName() const;
		virtual bool		getSigne() const;
		virtual int			getGrade_req_signe() const;
		virtual int			getGrade_req_execute() const;
		void				setSigne(bool);
		void	execute(Bureaucrat const & executor) const;
};

#endif