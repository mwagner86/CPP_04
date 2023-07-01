/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:50:13 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:50:16 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
