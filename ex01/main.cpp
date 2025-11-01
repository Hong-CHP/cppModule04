/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:55:06 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 15:50:29 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		// Animal	*Meta = new Animal();
		// Animal	littleMeta(*Meta);
		// Animal	bigMeta;
		// bigMeta = *Meta;
		// Animal	*moyenMeta = new Animal(*Meta);
		// delete Meta;
		// delete moyenMeta;
		// std::cout << "*****************" << std::endl;
		// std::cout << "*****************" << std::endl;
		
		// Dog *D = new Dog();
		// D->makeSound();
		// std::cout << "*****************" << std::endl;
		// Dog	smallDog(*D);
		// smallDog.makeSound();
		// std::cout << "*****************" << std::endl;
		// Dog bigDog;
		// bigDog = *D;
		// std::cout << "*****************" << std::endl;
		// Dog *medianDog = new Dog(*D);
		// medianDog->makeSound();
		// std::cout << "*****************" << std::endl;
		
		// std::cout << "this is delete from heap: ";
		// delete medianDog;
		// std::cout << "this is delete from heap: ";
		// delete D;
		
		std::cout << "*****************" << std::endl;
		
		Animal *animals[6];
		for (int i = 0; i < 6; i++)
		{
			std::cout << "&&&& NEW ENTITY &&&&" << std::endl;
			if (i < 6 / 2)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		for (int i = 0; i < 6; i++)
			animals[i]->makeSound();
		for (int i = 0; i < 6; i++)
			delete animals[i];
	}
	return (0);
}