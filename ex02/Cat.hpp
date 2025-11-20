/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:09:39 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 15:27:19 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain *brain;
	public:
		Cat();
		Cat(std::string itype);
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
		~Cat();
		
		virtual void	makeSound() const;
		void	setIdea(int idx, std::string& idea);
		std::string	getIdea(int idx);
};

#endif