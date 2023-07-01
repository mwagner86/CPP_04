/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:41:37 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:41:39 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout	<< "Base Class " << COLOR_GREEN << "[Animal] " << COLOR_DEFAULT
				<< "Default Constructor called" << std::endl;
	this->_type = "Animal";
}
Animal::Animal(std::string type) {
	std::cout 	<< "Base Class " << COLOR_GREEN << "[Animal] " << COLOR_DEFAULT
				<< "Type Constructor called" << std::endl;
	this->_type = type;
}

Animal::Animal(Animal const & src) {
	std::cout 	<< "Base Class " << COLOR_GREEN << "[Animal] " << COLOR_DEFAULT
				<< "Copy Constructor called" << std::endl;
	*this = src;
}


Animal &	Animal::operator=(Animal const & rhs) {
	std::cout 	<< "Base Class " << COLOR_GREEN << "[Animal] " << COLOR_DEFAULT
				<< "AssignmentOperator Constructor called" << std::endl;
	if ( this != &rhs )
		this->_type = rhs._type;
	return *this;
}

Animal::~Animal() {
	std::cout 	<< "Base Class " << COLOR_GREEN << "[Animal] " << COLOR_DEFAULT
				 << "Destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout 	<< "Base Class " << COLOR_GREEN << "[Animal] " << COLOR_DEFAULT
				 << "makeSound() default member function called: *silence*" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}