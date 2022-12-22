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
#include "FragTrap.class.hpp"

int main()
{
    FragTrap    dede("dede");
    ClapTrap    clap("clap");
    FragTrap    def;
    FragTrap    copy("copydede");
    copy = dede;

    dede.attack("Default");
    def.takeDamage(30);
    def.beRepaired(10);
    def.takeDamage(5);
    dede.highFivesGuys();
    copy.attack("clap");
    clap.takeDamage(30);

    return (0);
}