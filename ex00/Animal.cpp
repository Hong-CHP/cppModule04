/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:04:13 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 13:43:05 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("") {
	std::cout << type << " : I construct Animal base class!" << std::endl;
}

Animal::Animal(std::string itype) : type(itype) {
	std::cout << type << " : I construct Animal base class!" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
	std::cout << type << " copy Animal base class!" << std::endl;
}

Animal&	Animal::operator=(const Animal& other) {
	if (this != &other)
		type = other.type; 
	std::cout << type << " base assignment operator called" << std::endl;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor for " << type << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "Generic animals make sound..." << std::endl;
}

const std::string& Animal::getType() const {
	return (this->type);
}
