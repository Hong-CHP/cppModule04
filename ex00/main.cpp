/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:55:06 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 14:00:10 by hporta-c         ###   ########.fr       */
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
		std::cout << "***********ANIMAL BASE**************" << std::endl;
		Animal a("Animals");
		Animal a1(a);
		Animal a2;
		a2 = a1;
		a.makeSound();
		a1.makeSound();
		a2.makeSound();
	}
	{
		std::cout << "***********DOG*************" << std::endl;
		Animal a("Animals");
		Dog d;
		Dog d1(d);
		Dog d2;
		d2 = d1;
		a.makeSound();
		d1.makeSound();
		d2.makeSound();
	}
	{
		std::cout << "***********CAT*************" << std::endl;
		Animal a("Animals");
		Cat c;
		Cat c1(c);
		Cat c2 = c1;
		a.makeSound();
		c1.makeSound();
		c2.makeSound();
	}
	{
		std::cout << "***********ANIMAL PTR*************" << std::endl;	
		Animal *meta = new Animal("Animal");
		Animal *susu = new Dog();
		Animal *meme = new Cat();
		std::cout << meta->getType() << std::endl;
		std::cout << susu->getType() << std::endl;
		std::cout << meme->getType() << std::endl;
		meta->makeSound();
		susu->makeSound();
		meme->makeSound();
		delete susu;
		delete meme;
		delete meta;
	}
	{
		std::cout << "***********WRONGANIMAL WRONGCAT*************" << std::endl;	
		WrongAnimal *WrongMeta = new WrongAnimal("WrongAnimal");
		WrongAnimal *WrongMeme = new WrongCat();
		std::cout << WrongMeta->getType() << std::endl;
		std::cout << WrongMeme->getType() << std::endl;
		WrongMeta->makeSound();
		WrongMeme->makeSound();
		delete WrongMeme;
		delete WrongMeta;
		return (0);
	}
}