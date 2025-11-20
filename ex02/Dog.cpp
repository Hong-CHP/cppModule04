/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:40:33 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 15:24:32 by hporta-c         ###   ########.fr       */
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


Dog::Dog(std::string itype) : Animal("Dog") {
	(void)itype;
	brain = new Brain();
	std::cout << type <<" default constructor create a new " << type << " with brain now!"<<std::endl;
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
		if (this->brain != NULL)
			delete this->brain;
		*this->brain = *other.brain;
		this->type = other.type;
	}
	std::cout << "Dog assigned" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << type << " : I have burn my brain." << std::endl;
	std::cout << type << " derived class is destroyed." << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Barking..." << std::endl;
}

void	Dog::setIdea(int idx, std::string& idea) {
	brain->setIdea(idx, idea);
}

std::string	Dog::getIdea(int idx) {
	return (brain->getIdea(idx));
}