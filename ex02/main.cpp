/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:55:06 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/03 11:37:22 by hporta-c         ###   ########.fr       */
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
		std::cout << "*****************" << std::endl;
		std::cout << "********ORIGIN BASE*********" << std::endl;
		std::string idea = "thinking";
		Dog *D = new Dog();
		D->makeSound();
		D->setIdea(0, idea);
		std::cout << "********SMALL DOG*********" << std::endl;
		Dog	smallDog(*D);
		smallDog.makeSound();
		std::cout << "Hey!!! I get a new idea : " << smallDog.getIdea(0) << std::endl;
		std::cout << "*******BIG DOG**********" << std::endl;
		Dog bigDog;
		bigDog = *D;
		std::cout << "********MEDIAN DOG*********" << std::endl;
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