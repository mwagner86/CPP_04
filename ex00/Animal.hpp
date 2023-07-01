//
// Created by max on 6/30/23.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP
#include <iostream>
#include "colors.hpp"

class Animal {

public:

	Animal();
	Animal(std::string type);
	Animal(Animal const & src);
	Animal & operator=( Animal const & rhs);
	virtual ~Animal();

	virtual void	makeSound() const;
	std::string		getType() const;

protected:

	std::string			_type;

};
#endif //EX00_ANIMAL_HPP
