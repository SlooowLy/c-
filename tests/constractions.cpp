#include <iostream>

class test
{
	public:
		std::string name;
	test ()
	{
		std::cout << "void\n";
	}
	test (std::string hey)
	{
		this->name = hey;
	}
	~test()
	{
		std::cout << "DEAD\n";
	}
};

int main()
{
	test *oy;
	test hey("oooy");

	hey.name = "abdellah";
	std::cout << hey.name << std::endl;	
}
