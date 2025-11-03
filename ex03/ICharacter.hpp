/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:38:16 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/03 15:55:42 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {
			std::cout << "ICharacter Interface is destroyed." << std::endl;
		}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};

class Character : public ICharacter {
	private:
		std::string name;
		AMateria *inventory[4];
		AMateria *destockage[4];
	public:
		Character(std::string name);
		Character(const Character &other);
		Character&	operator=(const Character &other);
		~Character();
		
		std::string const & getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};

#endif