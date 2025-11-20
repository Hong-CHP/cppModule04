/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:52:20 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 15:54:38 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "Default AMateria constructor" << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type) {
	std::cout << "AMateria " << type  << " constructor" << std::endl;
}

AMateria::AMateria(const AMateria &other): _type(other._type) {
	std::cout << "AMateria copy constructor" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria &other) {
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << "AMateria assigned" << std::endl;
	}
	return (*this);
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor" << std::endl;
}

std::string const & AMateria::getType() const {
	return (this->_type);
}
