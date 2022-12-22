/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:15:30 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/22 20:15:30 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default FragTrap appeared" << std::endl;
    this->name = "Default";
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " appeared" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &rhs)
{
    *this = rhs;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " destroyed" << std::endl;
}

FragTrap    &FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "New FragTrap " << this->name << " has been copied and is now named " << rhs.name << std::endl;
    this->name = rhs.name;
    this->energy_points = rhs.energy_points;
    this->attack_damage = rhs.attack_damage;
    this->hit_points = rhs.hit_points;
    return (*this);
}

void    FragTrap::highFivesGuys()
{
    if (this->hit_points > 0)
        std::cout << "FragTrap " << this->name << " wants to high fives !" << std::endl;
    else
        std::cout << "FragTrap " << this->name << " is dead so no more high fives for him..." << std:endl; 
}

void    FragTrap::attack(std::string const &target)
{
    if (this->hit_points <= 0)
        std::cout << "FragTrap " << this->name << " is dead so he can't do anything..." << std::endl;
    else if (this->energy_points <= 0)
        std::cout << "FragTrap " << this->name << " doesn't have enough energy to attack" << std::endl;
    else
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
}