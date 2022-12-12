/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaurent <jlaurent@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:28:27 by jlaurent          #+#    #+#             */
/*   Updated: 2022/12/03 19:28:27 by jlaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int main()
{
    randomChump("Mino");
    Zombie  *zombie = newZombie("Kazyu");
    zombie->announce();
    delete (zombie);
    return (0);
}