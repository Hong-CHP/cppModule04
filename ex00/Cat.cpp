/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:16:04 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 13:40:26 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << type <<" : Derived class is created!" <<std::endl;
}

Cat::Cat(std::string itype) : Animal("Cat") {
	(void)itype;
	std::cout << type <<" default constructor create a new " << type <<std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
	
	this->type = other.type;
	std::cout << type <<" copy constructor " << type << " class " <<std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
	{
		Animal::operator=(other);
		this->type = other.type;
	}
	std::cout << type <<" assignment operator called" <<std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << type << " derived class is destroyed." << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow..." << std::endl;
}
