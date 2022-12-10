/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:41:26 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/06 16:41:26 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    set = 0;
}

HumanB::~HumanB()
{
    return;
}

int    isWhitespace(std::string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (!std::isspace(s[i]))
            return (1);
    }
    return (0);
}

void    HumanB::setWeapon(Weapon &weapon)
{
    set = 1;
    this->weapon = &weapon;
}

void    HumanB::attack()
{
    if (set == 0)
    {
        std::cout << this->name << " attacks with his bare hand" << std::endl;
        return;
    }
    hasWeapon = isWhitespace(this->weapon->getType());
    if (hasWeapon == 0)
        std::cout << this->name << " attacks with his bare hand" << std::endl;
    else
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}