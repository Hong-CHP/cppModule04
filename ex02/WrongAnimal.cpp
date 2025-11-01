/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 10:13:50 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 10:42:11 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "**** " << type << " : test base clase contructor ****" << std::endl;
}

void	WrongAnimal::makeSound() {
	std::cout << "**** " << type << " : try to make noise ****" << std::endl;
}

const std::string& WrongAnimal::getType() const {
	return (this->type);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "**** " << type << " test base class destroyed ****" << std::endl;
}