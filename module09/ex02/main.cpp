/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 02:21:52 by aaitoual          #+#    #+#             */
/*   Updated: 2023/04/18 02:21:53 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <vector>
# include <string>
# include <iostream>
# include <list>
# include <sstream>
# include <deque>
# include <ctime>
# include <sys/time.h>

template<class T> T	merge(T left, T right) {
	T res;
	for (size_t i = 0, j = 0; i != left.size() || j != right.size();) {
		if (i == left.size()) {
			res.push_back(right[j]);
			j++;
		}
		else if (j == right.size() || left[i] < right[j]) {
			res.push_back(left[i]);
			i++;
		}
		else {
			res.push_back(right[j]);
			j++;
		}
	}
	return res;
}

template<class T> T	merge_and_sort(T lis) {
	T res;

	if (lis.size() <= 1)
		return lis;
	T left_side = merge_and_sort(T (lis.begin(), lis.end() - (lis.size() / 2)));
	T right_side = merge_and_sort(T (lis.end() - (lis.size() / 2), lis.end()));
	res = merge(left_side, right_side);
	return res;
}

template<class T> void	merge_sort(T nums, int case_) {
	timeval	start, end;
	T		new_nums;

	gettimeofday(&start, NULL);
	new_nums = merge_and_sort(nums);
	gettimeofday(&end, NULL);
	if (case_) {
	std::cout << "BEFORE : ";
	for (size_t i = 0; i != nums.size(); i++)
		std::cout << nums[i] << " ";
	std::cout << "\nAFTER : ";
	for (size_t i = 0; i != new_nums.size(); i++)
		std::cout << new_nums[i] << " ";
	}
	std::cout << "\nTime to process a range of " << nums.size() << " elements with std::";
	if (case_)
		std::cout << "map : " <<  ((end.tv_sec * 1000000) + end.tv_usec) - ((start.tv_sec * 1000000) + start.tv_usec) << " us";
	else
		std::cout << "deque : " << ((end.tv_sec * 1000000) + end.tv_usec) - ((start.tv_sec * 1000000) + start.tv_usec) << " us" << std::endl;
}

int main(int ac, char **av) {
	std::vector <int>	number;
	std::deque <int>	numbers;
	int					tmp = -1;
	std::string			str;

	if (ac == 1) {
		std::cout << "Error!\n";
		return 1;
	}
	for (int i = 1; i != ac; i++) {
		str.append(av[i]);
	}
	if (str.find_first_not_of("0123456789") != str.npos) {
		std::cout << "Error!\n";
		return 1;
	}
	for (int i = 1; i != ac; i++) {
		std::istringstream(av[i]) >> tmp;
		number.push_back(tmp);
	}
	merge_sort(number, 1);
	for (int i = 1; i != ac; i++) {
		std::istringstream(av[i]) >> tmp;
		if (tmp < 0) {
			std::cout << "error!\n";
			return 1;
		}
		numbers.push_back(tmp);
	}
	merge_sort(numbers, 0);
	return 0;
}