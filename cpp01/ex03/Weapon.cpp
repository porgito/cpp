/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:19:05 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/06 16:19:05 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon(std::string type)
{
    setType(type);
}

Weapon::~Weapon()
{
    return;
}

const std::string   &Weapon::getType(void)  const
{
    return type;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}