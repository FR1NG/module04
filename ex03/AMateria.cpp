/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:33:23 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/21 19:45:14 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){};

AMateria::AMateria(std::string const &type): type(type) {};

AMateria::AMateria(const AMateria& amateria): type(amateria.type){};

AMateria& AMateria::operator=(const AMateria& amateria) {
	this->type = amateria.type;
	return (*this);
}

AMateria::~AMateria() {
	
}

std::string const & AMateria::getType() const {
	return (this->type);
}

AMateria* AMateria::clone() const {}