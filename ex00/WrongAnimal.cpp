/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 10:13:50 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 13:58:51 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("") {
	std::cout << "**** " << type << " : test base clase contructor ****" << std::endl;
}

WrongAnimal::WrongAnimal(std::string itype) : type(itype) {
	std::cout << type << " : I construct WrongAnimal base class!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
	std::cout << type << " copy WrongAnimal base class!" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		type = other.type; 
	std::cout << type << " base assignment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "**** " << type << " test base class destroyed ****" << std::endl;
}

void	WrongAnimal::makeSound() {
	std::cout << "**** " << type << " : try to make generic animals noise ****" << std::endl;
}

const std::string& WrongAnimal::getType() const {
	return (this->type);
}
