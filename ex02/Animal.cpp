/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:38:20 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/20 12:47:47 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor has been called" << std::endl;
}


Animal::Animal(const std::string type) : type(type) {
	std::cout << "Animal paramitrized constructor has been called" << std::endl;
}

Animal::Animal(const Animal& animal) {
	this->type = animal.type;
	std::cout << "Animal copy constructor has been called " << std::endl;
}

Animal& Animal::operator=(const Animal& animal) {
	if (this == &animal)
		return (*this);
	this->type = animal.type;
	std::cout << "Animal assignment operator has been called" << std::endl;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor has been called " << std::endl;
}

void	Animal::makeSound() const {
	std::cout << "Animal make a noise" << std::endl;
}

std::string Animal::getType() const {
	return (this->type);
}

void Animal::setType(const std::string& type) {
	this->type = type;
}