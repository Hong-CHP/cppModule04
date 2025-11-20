/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:55:06 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 15:43:47 by hporta-c         ###   ########.fr       */
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
		std::cout << "********ORIGIN BASE*********" << std::endl;
		std::string idea = "thinking";
		std::string idea1 = "eating";
		Dog *D = new Dog();
		D->makeSound();
		D->setIdea(0, idea);
		D->setIdea(2, idea1);
		std::cout << D->getIdea(0) << std::endl;
		if (D->getIdea(1) != "")
			std::cout << D->getIdea(1) << std::endl;
		else
			std::cout << "Nothing special.." << std::endl;
		std::cout << D->getIdea(2) << std::endl;
		std::cout << "********SMALL DOG*********" << std::endl;
		Dog	smallDog(*D);
		smallDog.makeSound();
		std::cout << "Hey!!! I have the same great idea : " << smallDog.getIdea(0) << std::endl;
		std::cout << "*******BIG DOG**********" << std::endl;
		Dog *bigDog(D);
		std::cout << "bigDog just wants " << bigDog->getIdea(2) << std::endl;
		std::cout << "********MEDIAN DOG*********" << std::endl;
		Dog *medianDog = new Dog(*D);
		std::string idea2 = "playing";
		medianDog->makeSound();
		medianDog->setIdea(1, idea2);
		std::cout << "Hey!!! I get the same idea : " << medianDog->getIdea(0) << std::endl;
		std::cout << "Hey!!! I get a new idea : " << medianDog->getIdea(1) << std::endl;
		std::cout << "Hey!!! I get the same idea : " << medianDog->getIdea(2) << std::endl;
		std::cout << "*****************" << std::endl;
		
		delete medianDog;
		delete D;
		
	}
	return (0);
}