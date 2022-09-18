# include <iostream>

class test1{
	int i;
	public :
		test1(int j) {i = j;}
		test1& operator = (const test1& copy) { i = copy.i;}
};

class test2{
	int i;
	public :
		test2(int j) {i = j;}
		test2& operator = (const test2& copy) { i = copy.i;}
};

int	main()
{
	test1 t1 (1);
	test2 t2 (1);

	test1 + test2;
}