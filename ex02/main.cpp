#include <iostream>

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const int numAnimals = 4;
	AAnimal* animals[numAnimals];

	// Create and fill the array with Dog and Cat objects
	for (int i = 0; i < numAnimals; i++) {
		if (i < numAnimals / 2) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}
/*	const AAnimal* animal = new AAnimal();
	std::cout << "I am a " << animal->getType() << " I will try to make a sound" << std::endl;
	animal->makeSound();
	delete animal;
	std::cout << std::endl;*/

	// Delete each AAnimal object
	for (int i = 0; i < numAnimals; i++) {
		delete animals[i];
	}

	return 0;
}


/*

// Old Test 3: Setting Ideas.
int main() {
	// AAnimal animal; // wont work, because not instantiable
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
