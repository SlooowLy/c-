# include <fstream>
# include <iostream>
# include <string>

int	main()
{
	char tmp;
	std::fstream file("test.txt");

	for (int i = 0; i < 6 ; i++)
	{
		if (!file.get(tmp))
			return 0;
		std::cout << tmp;
	}
}