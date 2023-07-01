//
// Created by max on 6/30/23.
//

#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP
#include <iostream>
#include "colors.hpp"


class Brain {

public:

	Brain();
	Brain(std::string type);
	Brain(Brain const & src);
	Brain & operator=( Brain const & rhs);
	~Brain();

	void setIdea(int index, const std::string& idea);
	std::string getIdea(int index) const;

private:
	static const int _arraySize = 100;
	std::string _ideas[_arraySize];

};

#endif //EX01_BRAIN_HPP
