/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:38:05 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/21 12:18:29 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string name);
		Animal(const Animal& animal);
		virtual ~Animal();
		Animal& operator=(const Animal& animal);
		
		virtual void	makeSound() const;
		std::string getType(void) const;
		void 			setType(const std::string& type);
};

#endif