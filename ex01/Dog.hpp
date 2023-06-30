//
// Created by max on 6/30/23.
//

#ifndef EX01_DOG_HPP
#define EX01_DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {


public:

	Dog();
	Dog(Dog const &src);
	Dog & operator=(Dog const &rhs);
	~Dog();

	virtual void	makeSound() const;

};


#endif //EX01_DOG_HPP
