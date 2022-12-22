/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:11:55 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/14 23:11:55 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

int main()
{
    ScavTrap    dede("dede");
    ClapTrap    clap("clap");
    ScavTrap    def;
    ScavTrap    copy("copydede");
    copy = dede;

    dede.attack("Default");
    def.takeDamage(20);
    def.beRepaired(10);
    def.takeDamage(5);
    dede.guardGate();
    copy.attack("clap");
    clap.takeDamage(20);

    return (0);
}