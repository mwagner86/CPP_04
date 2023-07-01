/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:39:29 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:39:33 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {


public:

	Dog();
	Dog(Dog const &src);
	Dog & operator=(Dog const &rhs);
	~Dog();

	virtual void	makeSound() const;

};


#endif //EX00_DOG_HPP
