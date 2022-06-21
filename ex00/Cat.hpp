/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:17:17 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/20 14:30:43 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		Cat(const std::string type);
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);
		~Cat();
		
		void	makeSound(void) const;
};

#endif