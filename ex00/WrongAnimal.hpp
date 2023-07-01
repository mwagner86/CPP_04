/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:40:16 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:40:19 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP
#include <iostream>
#include "colors.hpp"

class WrongAnimal {

public:

	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const & src);
	WrongAnimal & operator=( WrongAnimal const & rhs );
	virtual ~WrongAnimal();

	virtual void	makeSound() const;
	std::string		getType() const;

protected:

	std::string			_type;

};

#endif //EX00_WRONGANIMAL_HPP
