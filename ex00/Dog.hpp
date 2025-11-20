/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:38:01 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 12:35:17 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog();
		Dog(std::string itype);
		Dog(const Dog& other);
		Dog& operator=(const Dog& other);
		~Dog();
		
		virtual void	makeSound() const;
};

#endif