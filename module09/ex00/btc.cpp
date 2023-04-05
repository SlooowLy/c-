# include "btc.hpp"

std::string	cute_from_string(std::string &str, size_t f, size_t l, size_t del) {
	std::string tmp;

	tmp = str.substr(f, l);
	if (l > tmp.size())
		del = 0;
	str.erase(f, l + del);
	return tmp;
}

bool	check_leap(int year) {
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0)
				return 1;
			else
				return 0;
		}
		else
			return 1;
	}
	return 0;
}

bool	check_date(std::string date) {
	int			year_num;
	int			mounth_num;
	int			day_num;

	std::istringstream(cute_from_string(date, 0, date.find('-'), 1)) >> year_num;
	std::istringstream(cute_from_string(date, 0, date.find('-'), 1)) >> mounth_num;
	std::istringstream(cute_from_string(date, 0, date.find('-'), 0)) >> day_num;
	if (year_num < 1500 || year_num > 2200)
		return 0;
	if (day_num < 1)
		return 0;
	switch (mounth_num) {
		case 2:
			if (check_leap(year_num)) {
				if (day_num > 29)
					return 0;
				else if (day_num > 28)
					return 0;
			}
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day_num > 31)
				return 0;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day_num > 30)
				return 0;
			break;
		default:
			return 0;
			break;
	}
	return 1;
}

info::info() {
	status = 0;
	val = 0;
	// std::cout << "constructor called\n";
}

info::~info() {std::cout << "";}

float	info::get_val() {return val;}

int		info::get_status() {return status;}

std::string	info::get_line() {return line;}

std::string	info::get_error() {
	switch (status) {
		case 1:
			return "Error: not a positive number.\n";
		case 2:
			return "bad input => " + line + "\n";
		case 3:
			return "Error: too large a number.\n";
		default:
			break;
	}
	return "";
}

void	info::set_val(float num_) {val = num_;};

void	info::set_status(int status_) {status = status_;}

void	info::set_line(std::string line_) {line = line_;}

calculator::calculator (char* file_name) {
	std::string		tmp;
	std::ifstream	file(file_name);
	std::ifstream	DB("../data.csv");

	if (!file.is_open()) {
		std::cout << "Couldn't open the file " << file_name << std::endl;
		return;
	}
	if (!DB.is_open()) {
		std::cout << "couldn't open the database file, path : ./data.csv" << std::endl;
		return;
	}
	while (true) {
		if (getline (file, tmp))
			get_info(tmp);
		else
			break;
	}
	while (true) {
		if (getline (DB, tmp))
			get_db_info(tmp);
		else
			break;
	}
}

void    calculator::get_info(std::string line) {
	std::string date;
	std::string value;
	int			date_tmp;
	float		value_tmp;
	info		value_info;
	date = cute_from_string(line, 0, line.find('|'), 1);
	if (!line.size())
		value_info.set_status(2);
	else
		value = cute_from_string(line, 0, line.size(), 0);
	if (!check_date(date))
		value_info.set_status(2);
	value_info.set_line(date);
	date.erase(std::remove(date.begin(), date.end(), '-'), date.end());
	std::istringstream(date) >> date_tmp;
	std::istringstream(value) >> value_tmp;
	if (value.size() && value_tmp < 0)
		value_info.set_status(1);
	else if (value_tmp > 1000)
		value_info.set_status(3);
	value_info.set_val(value_tmp);
	file_info.insert(std::pair<int, info> (date_tmp, value_info));
	// file_info[date_tmp] = value_info;
}

void	calculator::get_db_info(std::string line) {
	std::string date;
	std::string value;
	int			date_tmp;
	float		value_tmp;
	date = cute_from_string(line, 0, line.find(','), 1);
	value = cute_from_string(line, 0, line.size(), 0);
	date.erase(std::remove(date.begin(), date.end(), '-'), date.end());
	std::istringstream(date) >> date_tmp;
	std::istringstream(value) >> value_tmp;
	db_info.insert(std::pair<int, float> (date_tmp, value_tmp));
	// db_info[date_tmp] = value_tmp;
}

std::multimap<int, info>&	calculator::get_file() {return file_info;}

std::multimap<int, float>&	calculator::get_db() {return db_info;}
