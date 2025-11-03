/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 12:33:05 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/03 14:50:23 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
	private:
		int count;
		AMateria *learn[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		MateriaSource& operator=(const MateriaSource &other);
		~MateriaSource();
		
		void	learnMateria(AMateria *);
		AMateria* createMateria(std::string const & type);
		
};

#endif