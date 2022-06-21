/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:44:37 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/20 16:33:55 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():brain(new Brain()) {
	this->type = "Dog";
	std::cout << "Dog default constructor has been called " << std::endl;
}

Dog::Dog(const std::string type) {
	this->brain = new Brain();
	this->type = type;
	std::cout << "Dog paramitrized constructor has been called " << std::endl;
}

Dog::Dog(const Dog& dog) {
	this->brain = new Brain();
	*(this->brain) = *(dog.brain);
	this->type = dog.type;
	std::cout << "Dog copy constructor has been called " << std::endl;
}

Dog& Dog::operator=(const Dog& dog) {
	if (this == &dog)
		return(*this);
	this->type = dog.type;
	*(this->brain) = *(dog.brain);
	std::cout << "Dog assignment operator has been called" << std::endl;
	return (*this);
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog destructor has been called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "the dog Barks , \"bow wow\"" << std::endl;
}