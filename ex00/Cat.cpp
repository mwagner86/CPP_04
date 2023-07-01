/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:38:56 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:38:59 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout	<< "Derived Class " << COLOR_YELLOW << "[Cat] " << COLOR_DEFAULT
				 << "Default Constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & src) : Animal("Cat") {
	std::cout 	<< "Derived Class " << COLOR_YELLOW << "[Cat] " << COLOR_DEFAULT
				 << "Copy Constructor called" << std::endl;
	*this = src;
}

Cat &	Cat::operator=(Cat const & rhs) {
	std::cout 	<< "Derived Class " << COLOR_YELLOW << "[Cat] " << COLOR_DEFAULT
				 << "AssignmentOperator Constructor called" << std::endl;
	if ( this != &rhs )
		this->_type = rhs._type;
	return *this;
}

Cat::~Cat() {
	std::cout 	<< "Derived Class " << COLOR_YELLOW << "[Cat] " << COLOR_DEFAULT
				 << "Destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout 	<< "Derived Class " << COLOR_YELLOW << "[Cat] " << COLOR_DEFAULT
				 << "Meow Meow *purrrrr* Meow Meow " << std::endl;
}