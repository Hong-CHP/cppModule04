/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:40:33 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 12:30:15 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << type <<" : Derived class is created!" <<std::endl;
	brain = new Brain();
	std::cout << type << " said: I have a brain now!" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other) {
	this->type = other.type;
	this->brain = new Brain(*other.brain);
	std::cout << "I am the new one, I copy everything..." << std::endl;
}

Dog&	Dog::operator=(const Dog &other) {
	if (this != &other)
	{
		Animal::operator=(other);
		this->type = other.type;
		*this->brain = *other.brain;
	}
	std::cout << "Dog assigned" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << type << " : I'll destroy my brain." << std::endl;
	std::cout << type << " derived class is destroyed." << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Barking..." << std::endl;
}