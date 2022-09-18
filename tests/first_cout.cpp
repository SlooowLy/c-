#include <iostream>

using std::cout;

int main(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		for (int j = 0; av[i][j]; j++)
			cout << (char)toupper(av[i][j]);
		if (av[i + 1])
			cout << " ";
	}
	cout << std::endl;
	return (0);
}