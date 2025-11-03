/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 10:51:31 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/03 11:31:17 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain borns" << std::endl;
}

Brain::Brain(const Brain &other) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain copied" << std::endl;
}

Brain&	Brain::operator=(const Brain &other) {
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
		std::cout << "Brain assigned" << std::endl;
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain is burned" << std::endl;
}

void	Brain::setIdea(int idx, std::string& idea) {
	if (idx >=0 && idx < 100)
		ideas[idx] = idea;
}

std::string	Brain::getIdea(int idx) {
	if (idx >=0 && idx < 100)
		return (ideas[idx]);
	return "";
}
