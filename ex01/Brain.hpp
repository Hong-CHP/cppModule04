/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 10:51:34 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/20 14:37:09 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain {
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(std::string goodIdeas[100]);
		Brain(const Brain &other);
		Brain&	operator=(const Brain &other);
		~Brain();

		void setIdeas(int idx, std::string idea);
		const std::string& getIdeas(int idx) const;
};

#endif