/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 10:29:44 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 10:42:23 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "**** " << type << " : test base clase contructor ****" << std::endl;
}

void	WrongCat::makeSound() {
	std::cout << "**** " << type << " : try to moew~~~~ ****" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "**** " << type << " test base class destroyed ****" << std::endl;
}