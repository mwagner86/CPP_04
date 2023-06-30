//
// Created by max on 6/30/23.
//

#ifndef EX01_ANIMAL_HPP
#define EX01_ANIMAL_HPP
#include <iostream>
#include "colors.hpp"

class Animal {

public:

	Animal();
	Animal(std::string type);
	Animal(Animal const & src);
	Animal & operator=( Animal const & rhs );
	virtual ~Animal();

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

protected:

	std::string			_type;

};
#endif //EX01_ANIMAL_HPP
