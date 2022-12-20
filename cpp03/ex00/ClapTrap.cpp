/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:11:57 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/14 23:11:57 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "DEFAULT CLAPTRAP APPEARED" << std::endl;
    this->name = "DEFAULT";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string const name)
{
    std::cout << "CLAPTRAP " << name << " APPEARED" << std::endl;
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "CLAPTRAP " << name << " DESTROYED" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
    *this = rhs;
    return;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "NEW CLAPTRAP " << this->name << " HAS BEEN COPIED" << std::endl;
    this->name = rhs.name;
    this->energy_points = rhs.energy_points;
    this->attack_damage = rhs.energy_points;
    this->hit_points = rhs.hit_points;
    return (*this);
}

void    ClapTrap::attack(std::string const &target)
{
    if (this->hit_points <= 0)
        std::cout << this->name << " IS DEAD !" << std::endl;
    else if (this->energy_points <= 0)
        std::cout << this->name << " DOESN'T HAVE ENOUGH ENERGY TO ATTACK" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    
}