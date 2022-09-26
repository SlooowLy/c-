# include <string>
# include <iostream>

int	main() {
	std::string  *test = new std::string[5];
	// std::string  *tmp = new std::string[100];

	for (int i = 0; i < 10; i++) {
		test[i] = "hey";
	}
	// test[11] = "last";
	for (int i = 0; i < 10; i++) {
		std::cout << test[i] << std::endl;
	}
	// int i = 0;
	std::cout << sizeof(test) << std::endl;
	// while (test[i].capacity()) {
	// 	i++
	// }
	// std::copy(test, test + 3, tmp);
	// for (int i = 0; i < 5; i++)
	// {
	// 	std::cout << tmp[i] << std::endl;
	// }
	// std::cout << test[0] << std::endl;
}