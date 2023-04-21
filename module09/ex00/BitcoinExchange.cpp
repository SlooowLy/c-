/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 01:21:50 by aaitoual          #+#    #+#             */
/*   Updated: 2023/04/21 19:50:47 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

std::string	cute_from_string(std::string &str, size_t f, size_t l, size_t del);

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
    if (date.length() != 11)
        return false;
    for(size_t i = 0; i < date.length(); i++) {
        if((i == 4 || i == 7) && date[i] != '-')
            return false;
        else if (!isdigit(date[i]) && i != 10 && (i != 4 && i != 7))
            return false;
    }
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

void    Calculator::get_Info(std::string line) {
	std::string date;
	std::string value;
	int			date_tmp;
	float		value_tmp;
	Info		value_Info;

	value_Info.set_line(line);
	date = cute_from_string(line, 0, line.find('|'), 1);
	if (!line.size())
		value_Info.set_status(2);
	else
		value = cute_from_string(line, 0, line.size(), 0);
	if (value.find_first_not_of("123456789.0 ") != value.npos)
		value_Info.set_status(2);
	if (!check_date(date))
		value_Info.set_status(2);
	date.erase(std::remove(date.begin(), date.end(), '-'), date.end());
	std::istringstream(date) >> date_tmp;
	std::istringstream(value) >> value_tmp;
	if (value.size() && value_tmp < 0)
		value_Info.set_status(1);
	else if (value_tmp > 1000)
		value_Info.set_status(3);
	value_Info.set_val(value_tmp);
	file_Info.insert(std::pair<int, Info> (date_tmp, value_Info));
}

void	Calculator::get_db_Info(std::string line) {
	std::string date;
	std::string value;
	int			date_tmp;
	float		value_tmp;
	date = cute_from_string(line, 0, line.find(','), 1);
	value = cute_from_string(line, 0, line.size(), 0);
	date.erase(std::remove(date.begin(), date.end(), '-'), date.end());
	std::istringstream(date) >> date_tmp;
	std::istringstream(value) >> value_tmp;
	db_Info.insert(std::pair<int, float> (date_tmp, value_tmp));
}

std::multimap<int, Info>&	Calculator::get_file() {return file_Info;}

std::multimap<int, float, std::greater<int> >&	Calculator::get_db() {return db_Info;}


Calculator::Calculator (char* file_name) {
	std::string		tmp;
	std::ifstream	file(file_name);
	std::ifstream	DB("./data.csv");

	if (!file.is_open()) {
		std::cout << "Couldn't open the file " << file_name << std::endl;
		exit (1);
	}
	if (!DB.is_open()) {
		std::cout << "couldn't open the database file, path : ./data.csv" << std::endl;
		exit (1);
	}
	while (true) {
		if (getline (file, tmp))
			get_Info(tmp);
		else
			break;
	}
	while (true) {
		if (getline (DB, tmp))
			get_db_Info(tmp);
		else
			break;
	}
}

Calculator::Calculator () {};

Calculator::~Calculator () {};

Calculator::Calculator(const Calculator& copy) {*this = copy;}

Calculator& Calculator::operator = (const Calculator& copy) {
    file_Info = copy.file_Info;
    db_Info = copy.db_Info;
    return *this;
}

Info::Info (const Info& copy) {
	*this = copy;
}

Info &Info::operator= (const Info& copy) {
	val = copy.val;
	status = copy.status;
	line = copy.line;
	return *this;
}

std::string	cute_from_string(std::string &str, size_t f, size_t l, size_t del) {
	std::string tmp;

	tmp = str.substr(f, l);
	if (l > tmp.size())
		del = 0;
	str.erase(f, l + del);
	return tmp;
}

Info::Info() {
	status = 0;
	val = 0;
}

Info::~Info() {}

float	Info::get_val() {return val;}

int		Info::get_status() {return status;}

std::string	Info::get_line() {return line;}

std::string	Info::get_error() {
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

void	Info::set_val(float num_) {val = num_;};

void	Info::set_status(int status_) {status = status_;}

void	Info::set_line(std::string line_) {line = line_;}

