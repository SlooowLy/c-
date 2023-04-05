# include <vector>
# include <string.h>
# include <fstream>
# include <iostream>
# include <stdio.h>
# include <sstream>
# include <algorithm>
# include <map>

class info {
	private :
		float		val;
		int			status;
		std::string	line;
	public :
		info ();
		~info ();
		void		set_val(float);
		void		set_status(int);
		void		set_line(std::string);
		float		get_val();
		int			get_status();
		std::string	get_error();
		std::string	get_line();
};

class calculator {
	private :
		std::multimap<int, info> file_info;
		std::multimap<int, float> db_info;
		// std::vector<info>	dates;
		// std::vector<info>	values;
		// std::vector<int>	db_dates;
		// std::vector<float>	db_values;

		void	get_info(std::string);
		void	get_db_info(std::string);
	public :
		calculator (char* file_name);
		std::multimap<int, info>&	get_file();
		std::multimap<int, float>&	get_db();
};
