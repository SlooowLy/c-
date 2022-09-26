/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitoual <aaitoual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:39:31 by aaitoual          #+#    #+#             */
/*   Updated: 2022/09/26 23:41:26 by aaitoual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Brain.hpp"


int leaks_check(void) {
	Dog dog;
	{
		Dog tmp = dog; 
	}
	// Animal* fill[10];
	// for (int i = 0; i < 10; i++) {
	// 	if (i % 2) {
	// 		fill[i] = new Cat();
	// 	}
	// 	else {
	// 		fill[i] = new Dog();
	// 	}
	// }
	// for (int i = 0; i < 10; i++) {
	// 	fill[i]->makeSound();
	// 	delete fill[i];
	// }
	// Dog cat;
	// Brain	brain;
	// brain.set_ideas("testing", 0);
	// cat.set_brain(&brain);
	// Dog cat2 (cat);
	// std::cout << cat.get_brain()->get_ideas()[0] << std::endl;
	// std::cout << cat2.get_brain()->get_ideas()[0] << std::endl;
	// cat.edit_brain("not testing", 0);
	// std::cout << cat.get_brain()->get_ideas()[0] << std::endl;
	// std::cout << cat2.get_brain()->get_ideas()[0] << std::endl;

	return 0;
}

int main()
{
	leaks_check();
	system("leaks Animal");
}