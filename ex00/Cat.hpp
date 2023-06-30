//
// Created by max on 6/30/23.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP
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

#endif //EX00_CAT_HPP