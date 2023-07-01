/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:47:34 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:47:36 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
