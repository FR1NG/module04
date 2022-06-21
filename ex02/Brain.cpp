/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:39:44 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/20 18:58:03 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor has been called" << std::endl;
}

Brain::Brain(const Brain& brain) {
	std::copy(brain.ideas, brain.ideas + 100, this->ideas);
	std::cout << "Brain copy constructor has been called" << std::endl;
}


Brain& Brain::operator=(const Brain& brain) {
	if (this == &brain)
		return (*this);
	std::copy(brain.ideas, brain.ideas + 100, this->ideas);
	std::cout << "Brain assignment operator  has been called" << std::endl;
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor has been called" << std::endl;
}

std::string& Brain::getIdieas() {
	return (*this->ideas);
}