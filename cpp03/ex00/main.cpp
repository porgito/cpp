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

int main()
{
    ClapTrap    def;
    ClapTrap    test("test");
    ClapTrap    mino("mino");
    ClapTrap    copy = test;

    test.attack("mino");
    copy.attack("Default");
    def.takeDamage(1);
    mino.takeDamage(3);
    mino.beRepaired(2);
    mino.takeDamage(8);
    mino.attack("test");
    mino.beRepaired(1);
    mino.beRepaired(1);
    mino.beRepaired(1);
    mino.beRepaired(1);
    mino.beRepaired(1);
    mino.beRepaired(1);
    mino.beRepaired(1);
    mino.beRepaired(1);
    mino.beRepaired(2);
}