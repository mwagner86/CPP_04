/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:48:02 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:48:05 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_CAT_HPP
#define EX01_CAT_HPP
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

public:

	Cat();
	Cat(Cat const &src);
	Cat &operator=(Cat const &rhs);
	~Cat();

	virtual void makeSound() const;
	void setIdea(int index, const std::string& idea);
	std::string getIdea(int index) const;

private:
	Brain* _brain;
};

#endif //EX01_CAT_HPP