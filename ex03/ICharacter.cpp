/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchakoub <hchakoub@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:16:16 by hchakoub          #+#    #+#             */
/*   Updated: 2022/06/23 08:42:31 by hchakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(){}

ICharacter::ICharacter(const ICharacter& character) {}

ICharacter& ICharacter::operator=(const ICharacter& character) {}

ICharacter::~ICharacter() {}


std::string const& ICharacter::getName() const
{
	return (this->name);
}
