//
// Created by max on 6/30/23.
//

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"), _brain(new Brain()) {
	std::cout	<< "Derived Class " << COLOR_YELLOW << "[Cat] " << COLOR_DEFAULT
				 << "Default Constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & src) : AAnimal(src) {
	std::cout 	<< "Derived Class " << COLOR_YELLOW << "[Cat] " << COLOR_DEFAULT
				 << "Copy Constructor called" << std::endl;
	this->_brain = new Brain(*(src._brain));
}

Cat &	Cat::operator=(Cat const & rhs) {
	std::cout 	<< "Derived Class " << COLOR_YELLOW << "[Cat] " << COLOR_DEFAULT
				 << "AssignmentOperator Constructor called" << std::endl;
	if (this != &rhs) {
		AAnimal::operator=(rhs);
		delete _brain;
		_brain = new Brain(*(rhs._brain));
	}
	return *this;
}

Cat::~Cat() {
	std::cout 	<< "Derived Class " << COLOR_YELLOW << "[Cat] " << COLOR_DEFAULT
				 << "Destructor called" << std::endl;
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout 	<< "Derived Class " << COLOR_YELLOW << "[Cat] " << COLOR_DEFAULT
				 << "Meow Meow *purrrrr* Meow Meow " << std::endl;
}

void Cat::setIdea(int index, const std::string& idea) {
	if (this->_brain) {
		this->_brain->setIdea(index, idea);
	} else {
		std::cout << "Invalid Brain object" << std::endl;
	}
}

std::string Cat::getIdea(int index) const {
	if (this->_brain) {
		return this->_brain->getIdea(index);
	} else {
		std::cout << "Invalid Brain object" << std::endl;
		return "";
	}
}