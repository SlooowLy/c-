/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 00:00:32 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/26 01:05:16 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Class.hpp"

Base*	generate(void) {
	A		a;
	B		b;
	C		c;
	Base	*type[3];
	int		i;
	
	type[0] = new A;
	type[1] = new B;
	type[2] = new C;
	srand(time(0));
	i = rand() % 3;
	for (int u = 0; u < 3; u++) {
		if (u != i)
			delete type[u];
	}
	return type[i];
}

void	identify(Base* p) {
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A*> (p);
	b = dynamic_cast<B*> (p);
	c = dynamic_cast<C*> (p);
	{
		if (a)
			std::cout << "The type of the randomly generated object is A\n";
		if (b)
			std::cout << "The type of the randomly generated object is B\n";
		if (c)
			std::cout << "The type of the randomly generated object is C\n";
	}
}

void	identify(Base& p) {
	bool check[3] = {1, 1, 1};
	try {
		A	&a = dynamic_cast <A&> (p);
		(void)a;
	}
	catch (std::exception &e) {
		check[0] = 0;
	}
	try {	
		B	&b = dynamic_cast <B&> (p);
		(void)b;
	}
	catch (std::exception &e) {
		check[1] = 0;
	}
	try {
		C	&c = dynamic_cast <C&> (p);
		(void)c;
	}
	catch (std::exception &e) {
		check[2] = 0;
	}
	for (int i = 0; i < 3; i++)	{
		if (check[i] && i == 0)
			std::cout << "The type of the randomly generated object is A\n";
		if (check[i] && i == 1)
			std::cout << "The type of the randomly generated object is B\n";
		if (check[i] && i == 2)
			std::cout << "The type of the randomly generated object is C\n";
	}
}

int main() {
	Base *resault;

	resault = generate();
	identify(resault);
	identify(*resault);
	delete resault;
}