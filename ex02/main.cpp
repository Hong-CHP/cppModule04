/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:55:06 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 15:57:09 by hporta-c         ###   ########.fr       */
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
		Animal	*Meta = new Animal();
		Animal	littleMeta(*Meta);
		Animal	bigMeta;
		bigMeta = *Meta;
		Animal	*moyenMeta = new Animal(*Meta);
		delete Meta;
		delete moyenMeta;
		std::cout << "*****************" << std::endl;
		std::cout << "*****************" << std::endl;
		
		Dog *D = new Dog();
		D->makeSound();
		std::cout << "*****************" << std::endl;
		Dog	smallDog(*D);
		smallDog.makeSound();
		std::cout << "*****************" << std::endl;
		Dog bigDog;
		bigDog = *D;
		std::cout << "*****************" << std::endl;
		Dog *medianDog = new Dog(*D);
		medianDog->makeSound();
		std::cout << "*****************" << std::endl;
		
		std::cout << "this is delete from heap: ";
		delete medianDog;
		std::cout << "this is delete from heap: ";
		delete D;
		
	}
	return (0);
}