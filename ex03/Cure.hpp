/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:37:20 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 15:05:28 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(std::string const &type);
		Cure(const Cure &other);
		Cure&	operator=(const Cure &other);
		~Cure();

		virtual Cure* clone() const;
		virtual void use(ICharacter& target) const;
};

#endif