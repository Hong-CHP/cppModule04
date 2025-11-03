/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:56:20 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/03 16:50:06 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

Character::Character(std::string name): name(name) {
	std::cout << "Default character constructor creats " << name << std::endl;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
		this->destockage[i] = NULL;
	}
}

Character::Character(const Character &other) {
	std::cout << "Copy character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete inventory[i];
		this->inventory[i] = other.inventory[i]->clone();
		this->destockage[i] = NULL;
	}
}

Character&	Character::operator=(const Character &other) {
	std::cout << "Character assigned called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete inventory[i];
		this->inventory[i] = other.inventory[i]->clone();
		this->destockage[i] = NULL;
	}
	return (*this);
}

Character::~Character() {
	std::cout << "Character " << name << " is destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		if (destockage[i])
			delete destockage[i];
	}
}

std::string	const& Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria *m) {
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			std::cout << name << " put " << m->getType() << " in inventory successfully." << std::endl;
			this->inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	
	for (int i = 0; i < 4; i++)
	{
		if (idx >= 0 && idx < 4 && i == idx)
		{
			this->destockage[i] = this->inventory[i];
			this->inventory[i] = NULL;
			return ;
		}
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}
