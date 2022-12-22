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
    std::cout << "Default claptrap appeared" << std::endl;
    this->name = "Default";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string const name)
{
    std::cout << "Claptrap " << name << " appeared" << std::endl;
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap " << name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &rhs)
{
    *this = rhs;
    return;
}

ClapTrap    &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "New claptrap " << this->name << " has been copied" << std::endl;
    this->name = rhs.name;
    this->energy_points = rhs.energy_points;
    this->attack_damage = rhs.attack_damage;
    this->hit_points = rhs.hit_points;
    return (*this);
}

void    ClapTrap::attack(std::string const &target)
{
    if (this->hit_points <= 0)
        std::cout << this->name << " is dead so he can't do anything..." << std::endl;
    else if (this->energy_points <= 0)
        std::cout << this->name << " doesn't have enough energy to attack" << std::endl;
    else
    {
        std::cout << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points > 0)
    {
        std::cout << this->name << " takes " << amount << " damage(s)" << std::endl;
        this->hit_points -= amount;
        if (this->hit_points <= 0)
            std::cout << this->name << " is now dead..." << std::endl;
        else
            std::cout << this->name << " has now " << this->hit_points << " hit point(s)" << std::endl;
    }
    else
        std::cout << this->name << " is already dead so let him rest in peace..." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit_points > 0 && this->energy_points > 0)
    {
        std::cout << this->name << " use an energy point to gain " << amount << " hit point(s), he has " << (this->hit_points + amount) << " hit points now" << std::endl;
        this->energy_points--;
        this->hit_points += amount;
    }
    else if (this->hit_points <= 0)
        std::cout << this->name << " is dead so he can't do anything..." << std::endl;
    else if (this->energy_points <= 0)
        std::cout << this->name << " doesn't have enough energy to repair himself" << std::endl;
}