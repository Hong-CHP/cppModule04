/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:53:53 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 15:09:41 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(std::string const &type): AMateria(type) {
	std::cout << "Cure  " << type << " constructor" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other) {
	this->type = other.type;
	std::cout << "Cure copy constructor" << std::endl;
}

Cure&	Cure::operator=(const Cure &other) {
	if (this != &other)
	{
		// this->type = other.type;
		std::cout << "Cure assigned" << std::endl;
	}
	return (*this);
}

Cure::~Cure() {
	std::cout << "Cure destructor" << std::endl;
}

Cure*	Cure::clone() const {
	Cure *newCure = new Cure("new Cure");
	return (newCure);
}

void	Cure::use(ICharacter &target) const
{
	std::cout << "* heals <name>'s wounds *" << std::endl;
}