/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:55:22 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 15:20:29 by hporta-c         ###   ########.fr       */
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
		Animal(std::string itype);
		Animal(const Animal &other);
		Animal&	operator=(const Animal &other);
		virtual ~Animal();

		virtual void	makeSound() const = 0;
		const std::string& getType() const;
	};

#endif