/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:16:04 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 09:59:01 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << type <<" : Derived class is created!" <<std::endl;
}

void	Cat::makeSound() const {
	std::cout << "Meow..." << std::endl;
}

Cat::~Cat()
{
	std::cout << type << " derived class is destroyed." << std::endl;
}