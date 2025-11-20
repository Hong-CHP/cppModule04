/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 10:51:31 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 14:38:22 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default contructor" << std::endl;
}

Brain::Brain(std::string goodIdeas[100]) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = goodIdeas[i];
	std::cout << "Brain default constructor with 100 good ideas..." << std::endl;
}

Brain::Brain(const Brain &other) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain &other) {
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
		std::cout << "Brain assignment operator called" << std::endl;
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain is burned" << std::endl;
}

void Brain::setIdeas(int idx, std::string idea) {
	if (idx >= 0 && idx < 100)
		ideas[idx] = idea;
}

const std::string&	Brain::getIdeas(int idx) const
{
	return (ideas[idx]);
}
