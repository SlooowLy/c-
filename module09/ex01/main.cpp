/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 01:18:44 by aaitoual          #+#    #+#             */
/*   Updated: 2023/04/21 20:20:52 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <stack>
# include <sstream>

std::string	top_pop(std::stack<std::string> &vec) {
	std::string ret = vec.top();
	vec.pop();
	return ret;
}

bool	separate_content(std::stack<std::string> &tmp_vec, std::string &str) {
	std::string tmp;
	std::stack<std::string> vec;
	for (size_t j = 0; j < str.length();) {
		if (str.find(' ', j) != str.npos)
			tmp = str.substr(j, str.find(' ', j) + 1 - j);
		else
			tmp = str.substr(j, str.find(' ', j));
		if (tmp.size() > 2)
			return 0;
		j += tmp.size();
		if (tmp.size() > 1 && tmp[1] == ' ')
			tmp.erase(1);
		else if (tmp.size() > 1)
			return 1;
		if (tmp[0] != ' ')
			vec.push(tmp);
	}
	while (vec.size())
		tmp_vec.push(top_pop(vec));
	return 1;
}

bool	get_resault(std::stack<std::string> &vec, int &resault) {
	int tmp1, tmp2;
	std::stringstream ss;
	std::stack<std::string> res;
	std::string				signe;

	while (vec.size()) {
		if (vec.top() == "+" || vec.top() == "-" || vec.top() == "/" || vec.top() == "*") {
			if (res.size() < 2)
				return 0;
			signe = top_pop(vec);
			std::istringstream(top_pop(res)) >> tmp2;
			std::istringstream(top_pop(res)) >> tmp1;
			if (signe == "+") {
				ss << (tmp1 + tmp2);
				res.push(ss.str());
			}		
			else if (signe == "-") {
				ss << (tmp1 - tmp2);
				res.push(ss.str());
			}
			else if (signe == "*") {
				ss << (tmp1 * tmp2);
				res.push(ss.str());
			}
			else if (signe == "/") {
				if (tmp2 == 0)
					return 0;
				ss << (tmp1 / tmp2);
				res.push(ss.str());
			}
			ss.str("");
		}
		else
			res.push(top_pop(vec));
	}
	if (res.size() != 1)
		return 0;
	std::istringstream(res.top()) >> resault;
	return 1;
}

int main (int ac, char **av) {
	if (ac != 2) {
		std::cout << "Invalid arg number!!\n";
		return 1;
	}
	std::string					str =	av[1];
	std::stack<std::string>		vec;
	int							resault;

	if (str.find_first_not_of("1234567890 +-/*") != str.npos) {
		std::cout << "Error!\n";
		return 1;
	}
	if (!separate_content(vec, str)) {
		std::cout << "Error!\n";
		return 1;
	}
	if (!get_resault(vec, resault)) {
		std::cout << "Error!\n";
		return 1;
	}
	std::cout << resault << std::endl;
	return 0;
}