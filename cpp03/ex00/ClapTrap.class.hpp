/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:12:00 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/14 23:12:00 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define    CLAPTRAP_CLASS_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string name;
    int         hit_points;
    int         energy_points;
    int         attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string const name);
    ClapTrap(ClapTrap const &rhs);
    ~ClapTrap();

    ClapTrap    &operator=(ClapTrap const &rhs);

    void    attack(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount); 
};

#endif