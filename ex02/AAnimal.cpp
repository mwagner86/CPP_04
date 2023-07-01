//
// Created by max on 6/30/23.
//

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout	<< "Base Class " << COLOR_GREEN << "[AAnimal] " << COLOR_DEFAULT
				<< "Default Constructor called" << std::endl;
	this->_type = "AAnimal";
}
AAnimal::AAnimal(std::string type) {
	std::cout 	<< "Base Class " << COLOR_GREEN << "[AAnimal] " << COLOR_DEFAULT
				<< "Type Constructor called" << std::endl;
	this->_type = type;
}

AAnimal::AAnimal(AAnimal const & src) {
	std::cout 	<< "Base Class " << COLOR_GREEN << "[AAnimal] " << COLOR_DEFAULT
				<< "Copy Constructor called" << std::endl;
	*this = src;
}


AAnimal &	AAnimal::operator=(AAnimal const & rhs) {
	std::cout 	<< "Base Class " << COLOR_GREEN << "[AAnimal] " << COLOR_DEFAULT
				<< "AssignmentOperator Constructor called" << std::endl;
	if ( this != &rhs )
		this->_type = rhs._type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout 	<< "Base Class " << COLOR_GREEN << "[AAnimal] " << COLOR_DEFAULT
				 << "Destructor called" << std::endl;
}

void	AAnimal::makeSound() const
{
	std::cout 	<< "Base Class " << COLOR_GREEN << "[AAnimal] " << COLOR_DEFAULT
				 << "makeSound() default member function called: *silence*" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}