/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:37:42 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/21 19:27:16 by hchakoub         ###   ########.fr       */
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
	Animal* meowsy = new Cat();
	delete meowsy;
	
	// system("leaks a.out");
	
	return (0);
}