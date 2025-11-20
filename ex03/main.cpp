/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:17:18 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 16:15:20 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// create src ptr stocks ice copy and cure copy
// create me as character
// use tmp ptr keep address of new ice turn from learn
// me equip ice
// use tmp ptr keep address of new cure turn from learn
// me equip cure
// new character bob
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "****************************************" << std::endl;
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(1);
	tmp = src->createMateria("noexitant");
	me->equip(tmp);
	std::cout << "****************************************" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "****************************************" << std::endl;
	delete bob;
	delete me;
	delete src;
	return (0);
	
	// {
	// 	std::cout << "****************************************" << std::endl;
	// 	std::cout << "Base class pointer :" << std::endl;
	// 	std::cout << std::endl;
	// 	AMateria *babyblue = new Ice("AmateriaIce");
	// 	std::cout << "[" << babyblue->getType() << "]"<< std::endl;
	// 	delete babyblue;
	// }
	// {
	// 	std::cout << "Derived class pointer :" << std::endl;
	// 	std::cout << std::endl;
	// 	Ice *babyblue = new Ice("iceice");
	// 	std::cout << "[" << babyblue->getType() << "]"<< std::endl;
	// 	delete babyblue;
	// }
	// {
	// 	std::cout << "****************************************" << std::endl;
	// 	std::cout << "Base class pointer :" << std::endl;
	// 	std::cout << std::endl;
	// 	AMateria *babyBrown = new Cure("AmateriaCure");
	// 	std::cout << "[" << babyBrown->getType() << "]"<< std::endl;
	// 	delete babyBrown;
	// }
	// {
	// 	std::cout << "Base class pointer :" << std::endl;
	// 	std::cout << std::endl;
	// 	Cure *babyBrown = new Cure("curecure");
	// 	std::cout << "[" << babyBrown->getType() << "]"<< std::endl;
	// 	delete babyBrown;
	// }

}