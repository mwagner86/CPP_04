//
// Created by max on 6/30/23.
//

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Base Class " << COLOR_CYAN << "[Brain] " << COLOR_DEFAULT
			  << "Default Constructor called" << std::endl;
	for (int i = 0; i < _arraySize; i++) {
		_ideas[i] = "Default Idea";
	}
}

Brain::Brain(Brain const & src) {
	std::cout 	<< "Base Class " << COLOR_CYAN << "[Brain] " << COLOR_DEFAULT
				 << "Copy Constructor called" << std::endl;
	*this = src;
}

Brain &	Brain::operator=(Brain const & rhs) {
	std::cout 	<< "Base Class " << COLOR_CYAN << "[Brain] " << COLOR_DEFAULT
				 << "AssignmentOperator Constructor called" << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < _arraySize; i++) {
			_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout 	<< "Base Class " << COLOR_CYAN << "[Brain] " << COLOR_DEFAULT
				 << "Destructor called" << std::endl;
}


void Brain::setIdea(int index, const std::string& idea) {
	if (index >= 0 && index < _arraySize) {
		this->_ideas[index] = idea;
	} else {
		std::cout << "Invalid index for setting idea: " << index << std::endl;
	}
}

std::string Brain::getIdea(int index) const {
	if (index >= 0 && index < _arraySize) {
		return this->_ideas[index];
	} else {
		std::cout << "Invalid index for getting idea: " << index << std::endl;
		return "";
	}
}