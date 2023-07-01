/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:48:30 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:48:32 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_DOG_HPP
#define EX01_DOG_HPP
#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {


public:

	Dog();
	Dog(Dog const &src);
	Dog & operator=(Dog const &rhs);
	~Dog();

	virtual void	makeSound() const;
	void setIdea(int index, const std::string& idea);
	std::string getIdea(int index) const;

private:
	Brain* _brain;

};


#endif //EX01_DOG_HPP
