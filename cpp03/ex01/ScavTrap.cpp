/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:50:42 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/22 18:50:42 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default scavtrap appeared" << std::endl;
    this->name = "Default";
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
    std::cout << "Scavtrap " << name << " appeared" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &rhs)
{
    *this = rhs;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap " << this->name << " destroyed" << std::endl;
}

ScavTrap    &ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "New scavtrap " << this->name << " has been copied and is now named " << rhs.name << std::endl;
    this->name = rhs.name;
    this->energy_points = rhs.energy_points;
    this->attack_damage = rhs.attack_damage;
    this->hit_points = rhs.hit_points;
    return (*this);
}

void    ScavTrap::guardGate()
{
    if (this->hit_points > 0)
        std::cout << "ScavTrap " << this->name << " entered Gate keeper mod" << std::endl;
    else
        std::cout << "ScavTrap " << this->name << " can't keep the Gate anymore because he passes away..." << std::endl;
}

void    ScavTrap::attack(std::string const &target)
{
    if (this->hit_points <= 0)
        std::cout << "ScavTrap " << this->name << " is dead so he can't do anything..." << std::endl;
    else if (this->energy_points <= 0)
        std::cout << "ScavTrap " << this->name << " doesn't have enough energy to attack" << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points--;
    }
}
