/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:39:41 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:39:43 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

 // Main function from Subject -> will leak without destroy
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	delete i;
	j->makeSound();
	delete j;
	meta->makeSound();
	delete meta;

	return 0;
}

/*int	main() {
	const Animal* animal = new Animal();
	std::cout << "This is a " << animal->getType() << " " << std::endl;
	animal->makeSound();
	delete animal;
	std::cout << std::endl;


	const Animal* dog = new Dog();
	std::cout << "This is a " << dog->getType() << " " << std::endl;
	dog->makeSound();
	delete dog;
	std::cout << std::endl;


	const Animal* cat = new Cat();
	std::cout << "This is a " << cat->getType() << " " << std::endl;
	cat->makeSound();
	delete cat;
	std::cout << std::endl;


	const WrongAnimal* wrong_animal = new WrongAnimal();
	std::cout << "This is a " << wrong_animal->getType() << " " << std::endl;
	wrong_animal->makeSound();
	delete wrong_animal;
	std::cout << std::endl;


	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << "This is a " << wrong_cat->getType() << " " << std::endl;
	wrong_cat->makeSound();
	delete wrong_cat;
	std::cout << std::endl;

	return (0);
}*/
