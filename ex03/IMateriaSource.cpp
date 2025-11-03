/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:17:56 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/03 16:59:18 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

MateriaSource::MateriaSource(): count(0) {
	std::cout << "Default MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		learn[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	std::cout << "Copy MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->learn[i] = other.learn[i]->clone();
	*this = other; 
}

MateriaSource&	MateriaSource::operator=(const MateriaSource &other) {
	std::cout << "MateriaSource assigned" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
			this->learn[i] = other.learn[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete this->learn[i];
	std::cout << "MateriaSource is destroyed" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *m) {
	if (count < 4)
	{
		learn[count++] = m->clone();
		std::cout << "learn " << count << " materia." << std::endl;
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++)
	{
		if (learn[i] && type == learn[i]->getType())
			return (learn[i]->clone());
	}
	return NULL;
}