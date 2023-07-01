//
// Created by max on 6/30/23.
//

#ifndef EX02_AANIMAL_HPP
#define EX02_AANIMAL_HPP
#include <iostream>
#include "colors.hpp"

class AAnimal {

public:

	AAnimal();
	AAnimal(std::string type);
	AAnimal(AAnimal const & src);
	AAnimal & operator=(AAnimal const & rhs);
	virtual ~AAnimal();

	virtual void	makeSound() const = 0;
	std::string		getType() const;

protected:

	std::string			_type;

};
#endif //EX02_AANIMAL_HPP
