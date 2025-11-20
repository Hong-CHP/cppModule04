/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:16:04 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 16:36:50 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << type <<" : Derived class is created!" <<std::endl;
}

Cat::Cat(std::string itype) : Animal("Cat") {
	(void)itype;
	brain = new Brain();
	std::cout << type <<" default constructor create a new " << type <<std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Cat&	Cat::operator=(const Cat &other) {
	if (this != &other)
	{
		Animal::operator=(other);
		if (this->brain != NULL)
			delete this->brain;
		*this->brain = *other.brain;
		this->type = other.type;
	}
	std::cout << "Cat assigned" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	if (brain != NULL)
	{
		delete brain;
		brain = NULL;
	}	std::cout << type << " : I have burn my brain." << std::endl;
	std::cout << type << " derived class is destroyed." << std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow..." << std::endl;
}

void	Cat::setIdea(int idx, std::string& idea) {
	brain->setIdea(idx, idea);
}

std::string	Cat::getIdea(int idx) {
	return (brain->getIdea(idx));
}