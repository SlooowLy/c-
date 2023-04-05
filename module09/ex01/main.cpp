# include <string>
# include <iostream>
# include <vector>
# include <sstream>

bool	separate_content(std::vector<std::string> &vec, std::string &str) {
	std::string tmp;

	for (size_t i = 0, j = 0; i != str.length() && j < str.length(); i++) {
		tmp = str.substr(j, str.find(' ', j) + 1 - j);
		if (tmp.size() > 2)
			return 0;
		j += tmp.size();
		tmp.erase(1);
		vec.push_back(tmp);
	}
	return 1;
}

bool	get_resault(std::vector<std::string> &vec, int &resault) {
	int tmp1, tmp2;
	std::stringstream ss;

	for (size_t i = 0; i != vec.size(); i++) {
		if (vec[i] == "+" || vec[i] == "-" || vec[i] == "/" || vec[i] == "*") {
			if (i < 2)
				return 0;
			std::istringstream(vec[i - 2]) >> tmp1;
			std::istringstream(vec[i - 1]) >> tmp2;
			if (vec[i] == "+") {
				// vec[i - 2] = std::to_string(tmp1 + tmp2);
				ss << (tmp1 + tmp2);
				vec[i - 2] = ss.str();
			}		
			else if (vec[i] == "-") {
				// vec[i - 2] = std::to_string(tmp1 - tmp2);
				ss << (tmp1 - tmp2);
				vec[i - 2] = ss.str();
			}
			else if (vec[i] == "*") {
				// vec[i - 2] = std::to_string(tmp1 * tmp2);
				ss << (tmp1 * tmp2);
				vec[i - 2] = ss.str();
				// std::cout << "vec : " << vec[i - 2] << " num 1 : " << tmp1 << " num2 : " << tmp2 <<std::endl;
			}
			else if (vec[i] == "/") {
				// vec[i - 2] = std::to_string(tmp1 + tmp2);
				ss << (tmp1 / tmp2);
				vec[i - 2] = ss.str();
			}
			vec.erase(vec.begin() + (i - 1), vec.begin() + i + 1);
			i -= 2;
			ss.str("");
		}
	}
	if (vec.size() > 1)
		return 0;
	std::istringstream(vec[0]) >> resault;
	return 1;
}

int main (int ac, char **av) {
	if (ac != 2) {
		std::cout << "Invalid arg number!!\n";
		return 1;
	}
	std::string					str =	av[1];
	std::vector<std::string>	vec;
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