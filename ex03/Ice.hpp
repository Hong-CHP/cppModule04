/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:26:43 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/03 15:36:51 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &other);
		Ice&	operator=(const Ice &other);
		~Ice();
		
		virtual Ice* clone() const;
		virtual void use(ICharacter& target) const;
};

#endif