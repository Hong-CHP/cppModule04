/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:40:33 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/31 16:00:39 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Derived class : " << type << " is created!" <<std::endl;
}

Dog::~Dog()
{
	std::cout << type << " derived class is destroyed." << std::endl;
}