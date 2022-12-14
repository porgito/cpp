/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:04:19 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/12 17:21:33 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

Zombie* newZombie(std::string name)
{
    Zombie  *ZHeap = new Zombie(name);
    return (ZHeap);
}