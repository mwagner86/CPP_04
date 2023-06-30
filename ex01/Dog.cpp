//
// Created by max on 6/30/23.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout	<< "Derived Class " << COLOR_BLUE << "[Dog] " << COLOR_DEFAULT
				 << "Default Constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const & src) : Animal("Dog") {
	std::cout 	<< "Derived Class " << COLOR_BLUE << "[Dog] " << COLOR_DEFAULT
				 << "Copy Constructor called" << std::endl;
	*this = src;
}

Dog &	Dog::operator=(Dog const & rhs) {
	std::cout 	<< "Derived Class " << COLOR_BLUE << "[Dog] " << COLOR_DEFAULT
				 << "AssignmentOperator Constructor called" << std::endl;
	if ( this != &rhs )
		this->_type = rhs._type;
	return *this;
}

Dog::~Dog() {
	std::cout 	<< "Derived Class " << COLOR_BLUE << "[Dog] " << COLOR_DEFAULT
				 << "Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout 	<< "Derived Class " << COLOR_BLUE << "[Dog] " << COLOR_DEFAULT
				 << "Bark Bark *grrrrr* Bark Bark" << std::endl;
}