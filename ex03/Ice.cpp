/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:45:39 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/21 19:58:08 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(const Ice& ice):AMateria(ice.type) {}

Ice& Ice::operator=(const Ice& ice)
{
	this->type = ice.type;
	return (*this);
}

Ice::~Ice() {}

AMateria* Ice::clone() const {
	AMateria* clone = new Ice(*this);
	return(clone);
}