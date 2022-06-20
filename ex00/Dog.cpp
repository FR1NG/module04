/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:44:37 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/20 12:33:25 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog default constructor has been called " << std::endl;
}

Dog::Dog(const std::string type) {
	this->type = type;
	std::cout << "Dog paramitrized constructor has been called " << std::endl;
}

Dog::Dog(const Dog& dog) {
	this->type = dog.type;
	std::cout << "Dog copy constructor has been called " << std::endl;
}

Dog& Dog::operator=(const Dog& dog) {
	if (this == &dog)
		return(*this);
	this->type = dog.type;
	std::cout << "Dog assignment operator has been called" << std::endl;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor has been called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "the dog Barks , \"bow wow\"" << std::endl;
}