/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:55:22 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 15:56:36 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &other);
		Animal&	operator=(const Animal &other);
		virtual ~Animal();

		virtual void	makeSound() const = 0;
		const std::string& getType() const;
	};

#endif