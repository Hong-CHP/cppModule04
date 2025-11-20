/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:55:06 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 16:22:39 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Dog basic;
	{
    	Dog tmp = basic;
	}
	{
		std::cout << "********BASE ANIMAL*********" << std::endl;
		Animal	*Meta = new Animal("Animal");
		Animal	little(*Meta);
		Animal	big;
		big = *Meta;
		Meta->makeSound();
		little.makeSound();
		big.makeSound();
		Animal	*middle = new Animal(*Meta);
		middle->makeSound();
		delete Meta;
		delete middle;
	}
	{
		std::cout << "********DOG*********" << std::endl;
		Dog *D = new Dog();
		D->makeSound();
		D->getBrain().setIdeas(0, "eat");
		D->getBrain().setIdeas(1, "play");
		std::cout << D->getBrain().getIdeas(0) << std::endl;
		std::cout << D->getBrain().getIdeas(1) << std::endl;
		std::cout << "*****************" << std::endl;
		Dog *median = new Dog(*D);
		median->makeSound();
		std::cout << median->getBrain().getIdeas(0) << std::endl;
		std::cout << median->getBrain().getIdeas(1) << std::endl;
		std::cout << "*****************" << std::endl;
		Dog *little(D);
		little->makeSound();
		std::cout << little->getBrain().getIdeas(0) << std::endl;
		std::cout << little->getBrain().getIdeas(1) << std::endl;
		std::cout << "*****************" << std::endl;
		std::cout << "this is delete from heap: ";
		delete median;
		std::cout << "this is delete from heap: ";
		delete D;
	}
	{		
		std::cout << "*******ARRAY**********" << std::endl;
		
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