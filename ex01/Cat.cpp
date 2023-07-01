/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:42:05 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:42:09 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain()) {
	std::cout	<< "Derived Class " << COLOR_YELLOW << "[Cat] " << COLOR_DEFAULT
				 << "Default Constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & src) : Animal(src) {
	std::cout 	<< "Derived Class " << COLOR_YELLOW << "[Cat] " << COLOR_DEFAULT
				 << "Copy Constructor called" << std::endl;
	this->_brain = new Brain(*(src._brain));
}

Cat &	Cat::operator=(Cat const & rhs) {
	std::cout 	<< "Derived Class " << COLOR_YELLOW << "[Cat] " << COLOR_DEFAULT
				 << "AssignmentOperator Constructor called" << std::endl;
	if (this != &rhs) {
		Animal::operator=(rhs);
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
