/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:00:01 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/23 08:07:21 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure& cure):AMateria(cure.type) {}

Cure& Cure::operator=(const Cure& cure)
{
	this->type = cure.type;
	return (*this);
}

Cure::~Cure() {}

AMateria* Cure::clone() const {
	AMateria* clone = new Cure(*this);
	return(clone);
}

