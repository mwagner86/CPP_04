//
// Created by max on 6/30/23.
//

#ifndef EX01_CAT_HPP
#define EX01_CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {

public:

	Cat();
	Cat(Cat const &src);
	Cat &operator=(Cat const &rhs);
	~Cat();

	virtual void makeSound() const;
};

#endif //EX01_CAT_HPP