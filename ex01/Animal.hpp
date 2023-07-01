/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:41:42 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:41:46 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_ANIMAL_HPP
#define EX01_ANIMAL_HPP
#include <iostream>
#include "colors.hpp"

class Animal {

public:

	Animal();
	Animal(std::string type);
	Animal(Animal const & src);
	Animal & operator=( Animal const & rhs);
	virtual ~Animal();

	virtual void	makeSound() const;
	std::string		getType() const;

protected:

	std::string			_type;

};
#endif //EX01_ANIMAL_HPP

