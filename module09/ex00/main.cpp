# include "btc.hpp"

int main(int ac, char **av) {
	(void) ac;
	calculator test(av[1]);
	for (std::multimap<int, info>::iterator it = test.get_file().begin();
			it != test.get_file().end(); it++) {
		if (!(*it).second.get_status()) {
			std::cout << (*it).second.get_line() << " => " << (*it).second.get_val() << " = " << (*it).second.get_val() * (*test.get_db().lower_bound((*it).first)).second << std::endl;
		}
		else {
			std::cout << "--" << (*it).second.get_error();
		}
	}
	// std::cout << test.get_db()[20101214] << std::endl;
	// for (size_t i = 0; i != test.get_dates().size(); i++) {
	// 	test.get_dates().
	// }
}