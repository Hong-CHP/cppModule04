/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:17:18 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 14:58:53 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	{
		std::cout << "****************************************" << std::endl;
		std::cout << "Base class pointer :" << std::endl;
		std::cout << std::endl;
		AMateria *babyblue = new Ice("AmateriaIce");
		std::cout << "[" << babyblue->getType() << "]"<< std::endl;
		delete babyblue;
	}
	{
		std::cout << "Derived class pointer :" << std::endl;
		std::cout << std::endl;
		Ice *babyblue = new Ice("iceice");
		std::cout << "[" << babyblue->getType() << "]"<< std::endl;
		delete babyblue;
	}
	{
		std::cout << "****************************************" << std::endl;
		std::cout << "Base class pointer :" << std::endl;
		std::cout << std::endl;
		AMateria *babyBrown = new Cure("AmateriaCure");
		std::cout << "[" << babyBrown->getType() << "]"<< std::endl;
		delete babyBrown;
	}
	{
		std::cout << "Base class pointer :" << std::endl;
		std::cout << std::endl;
		Cure *babyBrown = new Cure("curecure");
		std::cout << "[" << babyBrown->getType() << "]"<< std::endl;
		delete babyBrown;
	}
}