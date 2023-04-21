/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:22:32 by aaitoual          #+#    #+#             */
/*   Updated: 2023/04/15 21:34:00 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <fstream>
# include <iostream>
# include <stdio.h>
# include <sstream>
# include <algorithm>
# include <map>
# include <functional>

class Info {
	private :
		float		val;
		int			status;
		std::string	line;
	public :
		Info ();
		Info (const Info&);
		Info &operator= (const Info&);
		~Info ();
		void		set_val(float);
		void		set_status(int);
		void		set_line(std::string);
		float		get_val();
		int			get_status();
		std::string	get_error();
		std::string	get_line();
};

class Calculator {
	private :
		std::multimap<int, Info> file_Info;
		std::multimap<int, float, std::greater<int> > db_Info;

		void	get_Info(std::string);
		void	get_db_Info(std::string);
	public :
		Calculator (char* file_name);
        Calculator ();
        ~Calculator ();
        Calculator (const Calculator&);
        Calculator& operator = (const Calculator&);
		std::multimap<int, Info>&	get_file();
		std::multimap<int, float, std::greater<int> >&	get_db();
};

