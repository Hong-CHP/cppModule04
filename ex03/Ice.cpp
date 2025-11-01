/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:53:01 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 15:09:50 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string const &type): AMateria(type) {
	std::cout << "Ice " << type << " constructor" << std::endl;
}

Ice::Ice(const Ice &other): AMateria(other) {
	this->type = other.type;
	std::cout << "Ice copy constructor" << std::endl;
}

Ice&	Ice::operator=(const Ice &other) {
	if (this != &other)
	{
		// this->type = other.type;
		std::cout << "Ice assigned" << std::endl;
	}
	return (*this);
}

Ice::~Ice() {
	std::cout << "Ice destructor" << std::endl;
}

Ice*	Ice::clone() const {
	Ice *newIce = new Ice("new Ice");
	return (newIce);
}

void	Ice::use(ICharacter &target) const 
{
	std::cout << "* shoots an ice bolt at <name> *" << std::endl;
}