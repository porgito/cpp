/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:15:24 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/06 16:15:24 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include "Weapon.class.hpp"

class HumanB
{
private:
    std::string name;
    Weapon      *weapon;
    int         hasWeapon;
    int         set;
public:
    HumanB(std::string name);
    ~HumanB();

    void    attack();
    void    setWeapon(Weapon &weapon);
};

#endif