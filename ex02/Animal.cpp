/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:04:13 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 15:56:45 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << type << " : I construct Animal base class!" << std::endl;
}

Animal::Animal(const Animal &other) {
	this->type = other.type;
	std::cout << "Animal copied" << std::endl;
}

Animal&	Animal::operator=(const Animal& other) {
	if (this != &other)
		this->type = other.type;
	std::cout << "Animal assigned.\n";
	return *this;
}

const std::string& Animal::getType() const {
	return (this->type);
}

Animal::~Animal() {
	std::cout << "Animal: Deconstruct " << type << " base class!" << std::endl;
}