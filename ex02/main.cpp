/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:37:42 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/21 19:16:19 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void test()
{
}

int main()
{
	// Animal* meowsy = new Animal();
	// Animal* meowsy = new Cat();
	// delete meowsy;
	
	int petsNumber = 6;
	Animal *pets[6];
	for (int i = 0; i < petsNumber / 2; i++)
		pets[i] = new Cat();
		
	for (int i = petsNumber / 2; i < petsNumber; i++)
		pets[i] = new Dog();
		
	std::cout << std::endl << "==========================" <<std::endl << std::endl;

	for (int i = 0; i < petsNumber; i++)
		delete pets[i];
	

	// system("leaks a.out");
	
	return (0);
}