/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:45:02 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/20 16:29:00 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"
#include "Brain.hpp"

 class Dog: public Animal {
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const std::string type);
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);
		~Dog();
		
		void	makeSound() const;
 };
 
#endif