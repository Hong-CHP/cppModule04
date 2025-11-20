/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 10:29:44 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 13:59:17 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "**** " << type << " : test cat clase contructor ****" << std::endl;
}

WrongCat::WrongCat(std::string itype) : WrongAnimal("WrongCat") {
	(void)itype;
	std::cout << type <<" default constructor create a new " << type <<std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	
	this->type = other.type;
	std::cout << type <<" copy constructor " << type << " class " <<std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other)
	{
		WrongAnimal::operator=(other);
		this->type = other.type;
	}
	std::cout << type <<" assignment operator called" <<std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "**** " << type << " test cat class destroyed ****" << std::endl;
}
void	WrongCat::makeSound() {
	std::cout << "**** " << type << " : try to moew~~~~ ****" << std::endl;
}