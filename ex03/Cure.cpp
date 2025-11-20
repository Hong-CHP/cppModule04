/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:53:53 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 16:12:51 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
	std::cout << "Default Cure constructor" << std::endl;
}

Cure::Cure(std::string const &type): AMateria("cure") {
	(void)type;
	std::cout << "Default Cure constructor" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other) {
	this->_type = other._type;
	std::cout << "Cure copy constructor" << std::endl;
}

Cure&	Cure::operator=(const Cure &other) {
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << "Cure assigned" << std::endl;
	}
	return (*this);
}

Cure::~Cure() {
	std::cout << "Cure destructor" << std::endl;
}

Cure*	Cure::clone() const {
	Cure *newCure = new Cure(*this);
	return (newCure);
}

void	Cure::use(ICharacter &target) const
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}