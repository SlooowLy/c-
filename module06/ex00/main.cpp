/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:13:01 by aaitoual          #+#    #+#             */
/*   Updated: 2022/10/13 09:17:17 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <limits>
# include <sstream>
# include <iomanip>
# include <cmath>

int	check_double(std::string ori, double *i) {
	for(int u = 0; ori[u]; u++) {
		if ((ori[u] == '+' || ori[u] == '-') && u == 0)
			u++;
		if (ori.find_first_not_of("0123456789.f") != ori.npos)
			return 0;
	}
	if (ori[ori.length() - 1] == 'f')
		ori.erase(ori.length() - 1);
	std::istringstream(ori) >> *i;
	return 1;
}

int	check_char(std::string ori, char *r) {
	if (ori.length() != 1)
		return 0;
	else
		*r = ori[0];
	return 1;
}

void	convert_and_print(int done, char r, double i, std::string ori) {
	std::cout << std::setprecision(1) << std::fixed;
	if (done == 1) {
		if ((int)i > 31 && (int)i < 127)
			std::cout << "char : " << static_cast<char> (i) << std::endl;
		else if ((int) i > -1 && (int)i < 128)
			std::cout << "char : non Displayable" << std::endl;
		else
			std::cout << "char : impossible\n";
		std::cout << "int : " << static_cast<int> (i) << std::endl;
		std::cout << "float : " << static_cast<float> (i) << "f" << std::endl;
		std::cout << "doube : " << i << std::endl;
	}
	if (done == 2) {
		std::cout << "char : " << r << std::endl;
		std::cout << "int : " << static_cast<int> (r) << std::endl;
		std::cout << "float : " << static_cast<float> (r) << "f" << std::endl;
		std::cout << "doube : " << static_cast<double> (r) << std::endl;
	}
	if (done == 3) {
		double tmp;
		std::istringstream(ori) >> tmp;
		if ((int)tmp > 31 && (int)tmp < 127)
			std::cout << "char : " << static_cast<char> (tmp) << std::endl;
		else if ((int)tmp > -1 && (int)tmp < 128)
			std::cout << "char : non Displayable" << std::endl;
		else
			std::cout << "char : impossible\n";
		if (!tmp)
			std::cout << "int : impossibl\n";
		else
			std::cout << "int : " << static_cast<int> (tmp) << std::endl;
		std::cout << "float : " << static_cast<float> (tmp) << "f" << std::endl;
		std::cout << "doube : " << tmp << std::endl;
	}
	r = 0;
}

int	check_other(std::string ori)
{
	if (ori == "+inff" || ori == "+inf" || ori == "-inff" || ori == "-inf" || ori == "nanf" || ori == "nan")
		return 1;
	return 0;
} 

int main(int ac, char **av) {
	if (ac < 2 || ac > 2) {
		std::cout << "Arg error\n";
		return 0;
	}
	double	i = 0;
	char	r = 0;
	int 	done;
	if (check_double(av[1], &i)) {
		done = 1;
	}
	else if (check_char(av[1], &r)) {
		done = 2;
	}
	else if (check_other(av[1])) {
		done = 3;
	}
	else {
		std::cout << "invalid input\n";
		return 0;
	}
	convert_and_print(done, r, i, av[1]);
}