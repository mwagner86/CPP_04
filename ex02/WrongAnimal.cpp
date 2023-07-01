//
// Created by max on 6/30/23.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout	<< "Base Class " << COLOR_RED << "[WrongAnimal] " << COLOR_DEFAULT
				 << "Default Constructor called" << std::endl;
	this->_type = "WrongAnimal";
}
WrongAnimal::WrongAnimal(std::string type) {
	std::cout 	<< "Base Class " << COLOR_RED << "[WrongAnimal] " << COLOR_DEFAULT
				 << "Type Constructor called" << std::endl;
	this->_type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
	std::cout 	<< "Base Class " << COLOR_RED << "[WrongAnimal] " << COLOR_DEFAULT
				 << "Copy Constructor called" << std::endl;
	*this = src;
}


WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs) {
	std::cout 	<< "Base Class " << COLOR_RED << "[WrongAnimal] " << COLOR_DEFAULT
				 << "AssignmentOperator Constructor called" << std::endl;
	if ( this != &rhs )
		this->_type = rhs._type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout 	<< "Base Class " << COLOR_RED << "[WrongAnimal] " << COLOR_DEFAULT
				 << "Destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const {
	std::cout 	<< "Base Class " << COLOR_RED << "[WrongAnimal] " << COLOR_DEFAULT
				 << "makeSound() default member function called" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return (this->_type);
}