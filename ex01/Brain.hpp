/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:41:58 by mwagner           #+#    #+#             */
/*   Updated: 2023/07/01 12:42:01 by mwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP
#include <iostream>
#include "colors.hpp"


class Brain {

public:

	Brain();
	Brain(Brain const & src);
	Brain & operator=( Brain const & rhs);
	~Brain();

	void setIdea(int index, const std::string& idea);
	std::string getIdea(int index) const;

private:
	static const int _arraySize = 100;
	std::string _ideas[_arraySize];

};

#endif //EX01_BRAIN_HPP
