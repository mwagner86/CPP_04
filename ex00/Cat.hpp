/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:39:03 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:39:06 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {

public:

	Cat();
	Cat(Cat const &src);
	Cat &operator=(Cat const &rhs);
	~Cat();

	virtual void makeSound() const;
};

#endif //EX00_CAT_HPP