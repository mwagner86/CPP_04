/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:40:31 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:40:33 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

	WrongCat();
	WrongCat(WrongCat const &src);
	WrongCat &operator=(WrongCat const &rhs);
	~WrongCat();

	virtual void makeSound() const;
};

#endif //EX00_WRONGCAT_HPP
