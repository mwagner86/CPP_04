//
// Created by max on 6/30/23.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout	<< "Derived Class " << COLOR_MAGENTA << "[WrongCat] " << COLOR_DEFAULT
				 << "Default Constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal("WrongCat") {
	std::cout 	<< "Derived Class " << COLOR_MAGENTA << "[WrongCat] " << COLOR_DEFAULT
				 << "Copy Constructor called" << std::endl;
	*this = src;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs) {
	std::cout 	<< "Derived Class " << COLOR_MAGENTA << "[WrongCat] " << COLOR_DEFAULT
				 << "AssignmentOperator Constructor called" << std::endl;
	if ( this != &rhs )
		this->_type = rhs._type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout 	<< "Derived Class " << COLOR_MAGENTA << "[WrongCat] " << COLOR_DEFAULT
				 << "Destructor called" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout 	<< "Derived Class " << COLOR_MAGENTA << "[WrongCat] " << COLOR_DEFAULT
				 << "Miau Miau *purrrrr* Miau Miau " << std::endl;
}