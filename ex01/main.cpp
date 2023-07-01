#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	const int arraySize = 10;
	Animal* animals[arraySize];

	// Fill the array with Dog and Cat objects
	for (int i = 0; i < arraySize; i++) {
		if (i < arraySize / 2) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}

	// Delete every Animal object
	for (int i = 0; i < arraySize; i++) {
		if (animals[i] != 0) {
			delete animals[i];
			animals[i] = 0;
		}
	}

	return 0;
}