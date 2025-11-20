/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:40:33 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 13:40:20 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << type <<" : Derived class is created!" <<std::endl;
}

Dog::Dog(std::string itype) : Animal("Dog") {
	(void)itype;
	std::cout << type <<" default constructor create a new " << type <<std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	
	this->type = other.type;
	std::cout << type <<" copy constructor " << type << " class " <<std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
	{
		Animal::operator=(other);
		this->type = other.type;
	}
	std::cout << type <<" assignment operator called" <<std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << type << " derived class is destroyed." << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Barking..." << std::endl;
}