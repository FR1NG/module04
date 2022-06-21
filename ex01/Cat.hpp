/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:17:17 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/20 15:34:46 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const std::string type);
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);
		~Cat();
		
		void	makeSound(void) const;
		Brain& getBrain();
		void	setBrain(const Brain& brain);
};

#endif