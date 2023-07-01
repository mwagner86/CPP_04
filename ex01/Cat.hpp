//
// Created by max on 6/30/23.
//

#ifndef EX01_CAT_HPP
#define EX01_CAT_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

public:

	Cat();
	Cat(Cat const &src);
	Cat &operator=(Cat const &rhs);
	~Cat();

	virtual void makeSound() const;
	void setIdea(int index, const std::string& idea);
	std::string getIdea(int index) const;

private:
	Brain* _brain;
};

#endif //EX01_CAT_HPP