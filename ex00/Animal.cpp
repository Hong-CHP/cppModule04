/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:04:13 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/31 16:01:03 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << type << " : I construct Animal base class!" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal: Deconstruct " << type << " base class!" << std::endl;
}