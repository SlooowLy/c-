/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:19:20 by aaitoual          #+#    #+#             */
/*   Updated: 2022/08/28 16:39:08 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <array>
# include <string>
# include <iostream>

class harl
{
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	public :
		void complain( std::string level );
};

#endif