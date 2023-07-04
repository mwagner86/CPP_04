/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:43:27 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/04 16:47:57 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

/*
 // Test1: Provided main file
int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	return 0;
}
*/

// Test 2: Array of Animal Objects and deleting Animal Objects.
int main() {
	const int numAnimals = 4;
	Animal* animals[numAnimals];

	// Create and fill the array with Dog and Cat objects
	for (int i = 0; i < numAnimals; i++) {
		if (i < numAnimals / 2) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}
	const Animal* animal = new Animal();
	std::cout << "I am a " << animal->getType() << " I will try to make a sound" << std::endl;
	animal->makeSound();
	delete animal;
	std::cout << std::endl;

	// Delete each Animal object
	for (int i = 0; i < numAnimals; i++) {
		delete animals[i];
	}

	return 0;
}

/*
// Test 3: Setting Ideas.
int main() {
	Animal animal;
	WrongAnimal wrongAnimal;
	Cat cat;
	Dog dog;
	WrongCat wrongCat;

	cat.setIdea(1, "I want to hunt a mouse");
	cat.setIdea(2, "I'm tired so I will sleep in this sunbeam");
	cat.setIdea(3, "I gonna chase a laser pointer");
	cat.setIdea(4, "I'm gonna knock these objects off this table");

	dog.setIdea(1, "I want to chase a cat");
	dog.setIdea(2, "Fetching a ball would be great");
	dog.setIdea(3, "Boy, I love running in the park");
	dog.setIdea(4, "I will burrow this bone");

	std::cout << "Cat Idea 0: " << cat.getIdea(0) << std::endl;
	std::cout << "Cat Idea 1: " << cat.getIdea(1) << std::endl;
	std::cout << "Cat Idea 2: " << cat.getIdea(2) << std::endl;
	std::cout << "Cat Idea 3: " << cat.getIdea(3) << std::endl;
	std::cout << "Dog Idea 0: " << dog.getIdea(0) << std::endl;
	std::cout << "Dog Idea 1: " << dog.getIdea(1) << std::endl;
	std::cout << "Dog Idea 2: " << dog.getIdea(2) << std::endl;
	std::cout << "Dog Idea 3: " << dog.getIdea(3) << std::endl;
}
*/


/*
// Test 4: Deep Copy: Copy Constructor and Assignment Operator
int main() {
	Cat cat1;
	cat1.setIdea(0, "Sleeping");
	cat1.setIdea(1, "Playing with a string");

	Cat cat2 = cat1; // Using the copy constructor

	// Print the ideas of cat1
	std::cout << "Cat 1 ideas:" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << "Idea " << i << ": " << cat1.getIdea(i) << std::endl;
	}

	// Print the ideas of cat2
	std::cout << "Cat 2 ideas:" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << "Idea " << i << ": " << cat2.getIdea(i) << std::endl;
	}

	Dog dog1;
	dog1.setIdea(0, "Barking at strangers");
	dog1.setIdea(1, "Chasing a ball");

	Dog dog2 = dog1; // Using the copy constructor

	// Print the ideas of dog1
	std::cout << "Dog 1 ideas:" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << "Idea " << i << ": " << dog1.getIdea(i) << std::endl;
	}

	// Print the ideas of dog2
	std::cout << "Dog 2 ideas:" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << "Idea " << i << ": " << dog2.getIdea(i) << std::endl;
	}

	Animal* animalPtr = new Cat();
	delete animalPtr; // Without virtual destructor, the Cat destructor won't be called

	return 0;
}
*/
