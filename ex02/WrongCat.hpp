//
// Created by max on 6/30/23.
//

#ifndef EX01_WRONGCAT_HPP
#define EX01_WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat();
	WrongCat(WrongCat const &src);
	WrongCat &operator=(WrongCat const &rhs);
	~WrongCat();

	virtual void makeSound() const;
};

#endif //EX01_WRONGCAT_HPP
