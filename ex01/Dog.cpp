/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:42:32 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:42:39 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain()) {
	std::cout	<< "Derived Class " << COLOR_BLUE << "[Dog] " << COLOR_DEFAULT
				 << "Default Constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const & src) : Animal(src) {
	std::cout 	<< "Derived Class " << COLOR_BLUE << "[Dog] " << COLOR_DEFAULT
				 << "Copy Constructor called" << std::endl;
	this->_brain = new Brain(*(src._brain));
}

Dog &	Dog::operator=(Dog const & rhs) {
	std::cout 	<< "Derived Class " << COLOR_BLUE << "[Dog] " << COLOR_DEFAULT
				 << "AssignmentOperator Constructor called" << std::endl;
	if (this != &rhs) {
		Animal::operator=(rhs);
		delete _brain;
		_brain = new Brain(*(rhs._brain));
	}
	return *this;
}

Dog::~Dog() {
	std::cout 	<< "Derived Class " << COLOR_BLUE << "[Dog] " << COLOR_DEFAULT
				 << "Destructor called" << std::endl;
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout 	<< "Derived Class " << COLOR_BLUE << "[Dog] " << COLOR_DEFAULT
				 << "Bark Bark *grrrrr* Bark Bark" << std::endl;
}

void Dog::setIdea(int index, const std::string& idea) {
	if (this->_brain) {
		this->_brain->setIdea(index, idea);
	} else {
		std::cout << "Invalid Brain object" << std::endl;
	}
}

std::string Dog::getIdea(int index) const {
	if (this->_brain) {
		return this->_brain->getIdea(index);
	} else {
		std::cout << "Invalid Brain object" << std::endl;
		return "";
	}
}
